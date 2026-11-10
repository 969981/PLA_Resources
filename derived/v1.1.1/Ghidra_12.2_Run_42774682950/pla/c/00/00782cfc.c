/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00782cfc; name: FUN_00782cfc
 */


void FUN_00782cfc(long *param_1,undefined8 param_2,undefined8 param_3,void *param_4,ulong param_5,
                 int param_6)

{
  undefined *puVar1;
  
  FUN_007840dc();
  puVar1 = PTR_DAT_04373130 + 0x10;
  param_1[0x12] = (long)param_4;
  param_1[0x13] = 0;
  *param_1 = (long)puVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar1 = PTR_LAB_04376c98;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  nn::os::InitializeFiber
            ((FiberType *)(param_1 + 6),(_func_FiberType_ptr_void_ptr *)puVar1,param_1,param_4,
             param_5,param_6);
  return;
}


