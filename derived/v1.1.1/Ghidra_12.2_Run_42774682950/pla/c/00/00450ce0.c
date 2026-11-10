/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00450ce0; name: FUN_00450ce0
 */


undefined8 FUN_00450ce0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = param_2[0x17];
  uVar4 = (ulong)uVar2;
  puVar1 = param_2 + 7;
  *(undefined1 *)((long)puVar1 + uVar4) = 0x80;
  lVar5 = uVar4 + 1;
  if (0x37 < uVar2) {
    memset((void *)((long)puVar1 + lVar5),0,0x3f - uVar4);
    FUN_0044fce0(param_2,puVar1,1);
    lVar5 = 0;
  }
  memset((void *)((long)puVar1 + lVar5),0,0x38 - lVar5);
  uVar2 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
  uVar3 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
  param_2[0x15] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x16] = uVar3 >> 0x10 | uVar3 << 0x10;
  FUN_0044fce0(param_2,puVar1,1);
  param_2[0x17] = 0;
  FUN_004006a0(puVar1,0x40);
  uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  *param_1 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  param_1[1] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  param_1[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  param_1[3] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
  param_1[4] = uVar2 >> 0x10 | uVar2 << 0x10;
  return 1;
}


