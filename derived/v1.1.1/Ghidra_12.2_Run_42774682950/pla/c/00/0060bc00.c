/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060bc00; name: FUN_0060bc00
 */


void FUN_0060bc00(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  puVar3 = PTR_DAT_04375358;
  uVar2 = s_0000000000000000_0391a5d2._8_8_;
  uVar1 = s_0000000000000000_0391a5d2._0_8_;
  param_1[2] = 0x20;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((long)param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 8) = 0x2112a442;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x19) = uVar2;
  *(undefined8 *)((long)param_1 + 0x11) = uVar1;
  return;
}


