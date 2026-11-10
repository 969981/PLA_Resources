/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d21e0; name: FUN_003d21e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003d21e0(long param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if (param_1 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/completion_queue_factory.cc",
                 0x44,2,"assertion failed: %s","!reserved");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_20 = DAT_039fde58;
  uStack_28 = _UNK_039fde50;
  local_30 = _DAT_039fde48;
  (*(code *)PTR_FUN_04156b20)(&PTR_s_Default_Factory_04156b08,&local_30);
  return;
}


