/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7c00; name: FUN_003d7c00
 */


void FUN_003d7c00(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  if (PTR_DAT_04373ff8[0x10] != '\0') {
    FUN_003d3360("external/com_google_grpc_base/src/core/lib/channel/channel_stack.cc",0xe2,1,puVar1
                 ,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x003d7c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,param_2);
  return;
}


