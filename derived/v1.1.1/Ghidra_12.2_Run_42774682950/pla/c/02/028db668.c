/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028db668; name: FUN_028db668
 */


void FUN_028db668(long *param_1)

{
  undefined *puVar1;
  
  FUN_00afa5ac();
  puVar1 = PTR_DAT_0437a7b8;
  *param_1 = (long)(PTR_DAT_0437a7b8 + 0x10);
  param_1[9] = (long)(puVar1 + 0x88);
  param_1[10] = (long)(puVar1 + 0x128);
  nn::os::InitializeLightEvent((long)param_1 + 0x6c,0,1);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *param_1 = (long)&PTR_LAB_04273800;
  param_1[9] = (long)&PTR_LAB_04273920;
  param_1[10] = (long)&PTR_LAB_042739c0;
  *(undefined8 *)((long)param_1 + 0x85) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x4b] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x12] = (long)&PTR_LAB_042739e8;
  param_1[0x13] = (long)&PTR_LAB_04273a78;
  param_1[0x16] = 0;
  param_1[0x17] = param_1[1];
  param_1[0x25] = 0;
  param_1[0x26] = param_1[1];
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0x7ffffffffffffff;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0x1ffffffffffffff;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return;
}


