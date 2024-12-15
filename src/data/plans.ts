export const plans = [
  {
    id: 'plan_individual',
    name: 'Individual',
    price: 99,
    description: 'Ideal para profesionales independientes',
    features: [
      { name: 'Soporte básico', included: true },
      { name: 'Consultoría mensual', included: true },
      { name: 'Desarrollo personalizado', included: false },
      { name: 'Atención 24/7', included: false },
      { name: 'Servicios en la nube', included: false }
    ]
  },
  {
    id: 'plan_pyme',
    name: 'PYME',
    price: 299,
    description: 'Perfecto para empresas en crecimiento',
    highlighted: true,
    features: [
      { name: 'Soporte prioritario', included: true },
      { name: 'Consultoría semanal', included: true },
      { name: 'Desarrollo personalizado', included: true },
      { name: 'Atención 24/7', included: false },
      { name: 'Servicios en la nube', included: true }
    ]
  },
  {
    id: 'plan_empresa',
    name: 'Empresa',
    price: 999,
    description: 'Solución completa para grandes empresas',
    features: [
      { name: 'Soporte dedicado', included: true },
      { name: 'Consultoría ilimitada', included: true },
      { name: 'Desarrollo personalizado', included: true },
      { name: 'Atención 24/7', included: true },
      { name: 'Servicios en la nube', included: true }
    ]
  }
];