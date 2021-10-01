add_global_arguments([
	'-I' + meson.current_build_dir(),
	'-Db_sanitize=address',
	'-Dwerror=true',
], language: 'c')

docky_sources = [
    'main.c'
]

efl_version = '>= 1.25.0'
docky_deps = [
    dependency('ecore', version: efl_version)
]

executable('com.github.ebonjaeger.docky', docky_sources,
    dependencies: docky_deps,
    install: true,
)