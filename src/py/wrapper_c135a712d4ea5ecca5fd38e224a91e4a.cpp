#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TemplateArgument const volatile * get_pointer<class ::clang::TemplateArgument const volatile >(class ::clang::TemplateArgument const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c135a712d4ea5ecca5fd38e224a91e4a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateArgument  (*method_pointer_ddf4ccff9701594687e32ec45d2a1be6)() = ::clang::TemplateArgument::getEmptyPack;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_87b135b94a7854e0935cbbbfb3ba4b9c)() const = &::clang::TemplateArgument::getKind;
    bool  (::clang::TemplateArgument::*method_pointer_e648e0565c24505e96d1f4b1fa2473fe)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_4f0017a64d3f5623884feb9142bcd5a2)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_1bf0e46199ab554da18fbbb55dae6f87)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_f95dc96a71ec511791666b2691fca59b)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    bool  (::clang::TemplateArgument::*method_pointer_32be4b09a99c5c9dbdcd7e391fe6735e)() const = &::clang::TemplateArgument::isPackExpansion;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_c3a4864c2153579eaed85a6503b82f80)() const = &::clang::TemplateArgument::getAsType;
    class ::clang::ValueDecl * (::clang::TemplateArgument::*method_pointer_d14564868804596f81746684870cb78f)() const = &::clang::TemplateArgument::getAsDecl;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_3e1e65df8f2455de831d98a75584b627)() const = &::clang::TemplateArgument::getParamTypeForDecl;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_3f4088fd784d510f89ea2aadcbaff58e)() const = &::clang::TemplateArgument::getNullPtrType;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_04d815b923315818a2c25604c25bedf5)() const = &::clang::TemplateArgument::getIntegralType;
    void  (::clang::TemplateArgument::*method_pointer_5d83ef71c8775c3f90a0438ad413ea7e)(class ::clang::QualType ) = &::clang::TemplateArgument::setIntegralType;
    ::clang::TemplateArgument::pack_iterator  (::clang::TemplateArgument::*method_pointer_d86cd617373c5094965705a7cfd60b65)() const = &::clang::TemplateArgument::pack_begin;
    ::clang::TemplateArgument::pack_iterator  (::clang::TemplateArgument::*method_pointer_4c2a7f4993f250f7be8f418084855424)() const = &::clang::TemplateArgument::pack_end;
    unsigned int  (::clang::TemplateArgument::*method_pointer_511023b032205f879ba902c0593fae9d)() const = &::clang::TemplateArgument::pack_size;
    bool  (::clang::TemplateArgument::*method_pointer_fc30acfd0a5853babf8e9517bd1117c7)(class ::clang::TemplateArgument const &) const = &::clang::TemplateArgument::structurallyEquals;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_a43fc2d3f9a85c4e91cc8ab97327dd36)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    struct function_group
    {
        static class ::boost::python::str  function_ff6374551bf55e369f5d000b1edb1b8b(class ::clang::TemplateArgument * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::Held< class ::clang::TemplateArgument >::Type > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "Represents a template argument.\n\n", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def(boost::python::init<  >(""));
    class_c135a712d4ea5ecca5fd38e224a91e4a.def(boost::python::init< class ::clang::QualType , bool  >(""));
    class_c135a712d4ea5ecca5fd38e224a91e4a.def(boost::python::init< class ::clang::ValueDecl *, class ::clang::QualType  >(""));
    class_c135a712d4ea5ecca5fd38e224a91e4a.def(boost::python::init< class ::clang::TemplateArgument const &, class ::clang::QualType  >(""));
    class_c135a712d4ea5ecca5fd38e224a91e4a.def(boost::python::init< class ::clang::TemplateArgument const & >(""));
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_ddf4ccff9701594687e32ec45d2a1be6, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_87b135b94a7854e0935cbbbfb3ba4b9c, "Return the kind of stored template argument.\n\n:Return Type:\n    :py:obj:`clanglite.clang.TemplateArgument.arg_kind`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_e648e0565c24505e96d1f4b1fa2473fe, "Determine whether this template argument has no value.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_4f0017a64d3f5623884feb9142bcd5a2, "Whether this template argument is dependent on a template parameter such\nthat its result can change from one instantiation to another.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_1bf0e46199ab554da18fbbb55dae6f87, "Whether this template argument is dependent on a template parameter.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_f95dc96a71ec511791666b2691fca59b, "Whether this template argument contains an unexpanded parameter pack.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_32be4b09a99c5c9dbdcd7e391fe6735e, "Determine whether this template argument is a pack expansion.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_type", method_pointer_c3a4864c2153579eaed85a6503b82f80, "Retrieve the type for a type template argument.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_d14564868804596f81746684870cb78f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the declaration for a declaration non-type template argument.\n\n:Return Type:\n    :py:class:`clanglite.clang.ValueDecl`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_param_type_for_decl", method_pointer_3e1e65df8f2455de831d98a75584b627, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_null_ptr_type", method_pointer_3f4088fd784d510f89ea2aadcbaff58e, "Retrieve the type for null non-type template argument.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_integral_type", method_pointer_04d815b923315818a2c25604c25bedf5, "Retrieve the type of the integral value.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("set_integral_type", method_pointer_5d83ef71c8775c3f90a0438ad413ea7e, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_begin", method_pointer_d86cd617373c5094965705a7cfd60b65, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Iterator referencing the first argument of a template argument pack.\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateArgument`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_end", method_pointer_4c2a7f4993f250f7be8f418084855424, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Iterator referencing one past the last argument of a template argument\npack.\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateArgument`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_511023b032205f879ba902c0593fae9d, "The number of template arguments in the given template argument pack.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_fc30acfd0a5853babf8e9517bd1117c7, "Determines whether two template arguments are superficially the same.\n\n:Parameter:\n    `Other` (:py:class:`clanglite.clang.TemplateArgument`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_a43fc2d3f9a85c4e91cc8ab97327dd36, "When the template argument is a pack expansion, returns the pattern of\nthe pack expansion.\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateArgument`\n\n");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_ff6374551bf55e369f5d000b1edb1b8b, "");

}