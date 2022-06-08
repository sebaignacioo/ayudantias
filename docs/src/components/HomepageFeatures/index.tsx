import React from 'react';
import clsx from 'clsx';
import styles from './styles.module.css';

import { SiC, SiPython, SiJava } from 'react-icons/si';
import { FaLightbulb } from 'react-icons/fa';
import Link from '@docusaurus/Link';

type FeatureItem = {
  title: string;
  link: string;
  lenguaje: string;
  icon: JSX.Element;
  clave: string;
};

const FeatureList: FeatureItem[] = [
  {
    title: 'Fundamentos de algorítmos',
    lenguaje: 'Python',
    clave: 'INF1141 - INF1211 - ICD1341 - ICI1141 - ICI1241',
    icon: <SiPython className={styles.featureSvg} />,
    link: 'docs/category/fundamentos-de-algoritmos',
  },
  {
    title: 'Fundamentos de programación',
    lenguaje: 'C',
    clave: 'ICD1342 - ICI1242',
    icon: <SiC className={styles.featureSvg} />,
    link: 'docs/category/fundamentos-de-programacion',
  },
  {
    title: 'Programación orientada a objetos',
    lenguaje: 'Java',
    clave: 'INF2241',
    icon: <SiJava className={styles.featureSvg} />,
    link: 'docs/category/programacion-orientada-a-objetos',
  },
];

function Feature({ title, link, icon, lenguaje, clave }: FeatureItem) {
  return (
    <div className={clsx('col col--4')}>
      <div className="text--center">{icon}</div>
      <div className="text--center padding-horiz--md">
        <h3>{title}</h3>
        <ul className={styles.list}>
          <li>
            <strong>Clave asignatura:</strong> {clave}
          </li>
          <li>
            <strong>Lenguaje:</strong> {lenguaje}
          </li>
        </ul>
        <div className={styles.buttons}>
          <Link className="button button--primary" to={link}>
            <FaLightbulb /> Ver tips
          </Link>
        </div>
      </div>
    </div>
  );
}

export default function HomepageFeatures(): JSX.Element {
  return (
    <section className={styles.features}>
      <div className="container">
        <div className="row">
          {FeatureList.map((props, idx) => (
            <Feature key={idx} {...props} />
          ))}
        </div>
      </div>
    </section>
  );
}
