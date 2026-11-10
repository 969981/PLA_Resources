/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ba3d4; name: FUN_032ba3d4
 */


void FUN_032ba3d4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_0333d0b4(param_1,*(undefined4 *)(param_3 + 2));
  *param_1 = &PTR_FUN_04348ac0;
  FUN_0333de18(param_1 + 3,param_2);
  FUN_032c7a54(param_1 + 0xd,*param_3,0xffffffff);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0xe) = 1;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x24c) = 0;
  return;
}


