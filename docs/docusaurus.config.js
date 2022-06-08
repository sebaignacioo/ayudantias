// @ts-check
// Note: type annotations allow type checking and IDEs autocompletion

const lightCodeTheme = require('prism-react-renderer/themes/nightOwl');
const darkCodeTheme = require('prism-react-renderer/themes/dracula');

/** @type {import('@docusaurus/types').Config} */
const config = {
  title: 'Tips Ayudantías - Sebastián García',
  tagline: 'Escuela de Ingeniería Informática PUCV',
  url: 'https://ayudantias.sebaignacioo.me',
  baseUrl: '/',
  onBrokenLinks: 'throw',
  onBrokenMarkdownLinks: 'warn',
  favicon: 'img/favicon.ico',

  // GitHub pages deployment config.
  // If you aren't using GitHub pages, you don't need these.
  organizationName: 'sebaignacioo', // Usually your GitHub org/user name.
  projectName: 'ayudantias', // Usually your repo name.

  // Even if you don't use internalization, you can use this field to set useful
  // metadata like html lang. For example, if your site is Chinese, you may want
  // to replace "en" with "zh-Hans".
  i18n: {
    defaultLocale: 'es',
    locales: ['es'],
  },

  presets: [
    [
      'classic',
      /** @type {import('@docusaurus/preset-classic').Options} */
      ({
        docs: {
          sidebarPath: require.resolve('./sidebars.js'),
          // Please change this to your repo.
          // Remove this to remove the "edit this page" links.
          editUrl:
            'https://github.com/sebaignacioo/ayudantias/tree/main/docs',
        },
        theme: {
          customCss: require.resolve('./src/css/custom.css'),
        },
      }),
    ],
  ],

  themeConfig:
    /** @type {import('@docusaurus/preset-classic').ThemeConfig} */
    ({
      navbar: {
        title: 'Tips ayudantías',
        logo: {
          alt: 'INF PUCV',
          src: 'img/logo.svg',
        },
        items: [
          {
            to: 'docs/category/fundamentos-de-algoritmos',
            position: 'left',
            label: 'Fundamentos de algorítmos',
          },
          {
            to: 'docs/category/fundamentos-de-programacion',
            position: 'left',
            label: 'Fundamentos de programación',
          },
          {
            to: 'docs/category/programacion-orientada-a-objetos',
            position: 'left',
            label: 'Programación orientada a objetos',
          },
          {
            href: 'https://github.com/sebaignacioo/ayudantias',
            label: 'GitHub',
            position: 'right',
          },
        ],
      },
      footer: {
        style: 'dark',
        links: [
          {
            title: 'Tips',
            items: [
              {
                label: 'Fundamentos de algorítmos',
                to: 'docs/category/fundamentos-de-algoritmos',
              },
              {
                label: 'Fundamentos de programación',
                to: 'docs/category/fundamentos-de-programacion',
              },
              {
                label: 'Programación orientada a objetos',
                to: 'docs/category/programacion-orientada-a-objetos',
              },
            ],
          },
          {
            title: 'Links de interés',
            items: [
              {
                label: 'Navegador académico PUCV',
                href: 'https://navegador.ucv.cl',
              },
            ],
          }
        ],
        copyright: `${new Date().getFullYear()} - Sebastián García D. Hecho con Docusaurus.`,
      },
      prism: {
        theme: lightCodeTheme,
        darkTheme: darkCodeTheme,
      },
    }),
};

module.exports = config;
