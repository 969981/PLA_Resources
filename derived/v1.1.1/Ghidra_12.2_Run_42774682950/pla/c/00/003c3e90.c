/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c3e90; name: FUN_003c3e90
 */


void FUN_003c3e90(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)PTR_DAT_04373f70;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) != 0)) ||
     (lVar3 = *(long *)PTR_DAT_04373f70, lVar3 == param_1)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("entry && entry->next == nullptr && entry != tail_",
                  "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/nn/deferred_initializer.cc"
                  ,0x17,"deferred_initializer_add");
  }
  *(undefined8 *)(param_1 + 8) = 0;
  plVar1 = (long *)PTR_DAT_04373f78;
  if (*(long *)PTR_DAT_04373f78 != 0) {
    plVar1 = plVar2;
    plVar2 = (long *)(lVar3 + 8);
  }
  *plVar2 = param_1;
  *plVar1 = param_1;
  return;
}


