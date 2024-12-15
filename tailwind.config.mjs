/** @type {import('tailwindcss').Config} */
export default {
  content: ['./src/**/*.{astro,html,js,jsx,md,mdx,svelte,ts,tsx,vue}'],
  theme: {
    extend: {
      colors: {
        primary: '#0066CC',
        secondary: '#004C99',
        accent: '#FF6B00',
        success: '#00B894',
        warning: '#FFC107',
        error: '#FF5252',
        background: {
          light: '#F8FAFC',
          dark: '#1A1A1A'
        }
      },
      fontFamily: {
        sans: ['Inter', 'sans-serif'],
        display: ['Inter','sans-serif']
      },
    },
  },
  plugins: [],
}