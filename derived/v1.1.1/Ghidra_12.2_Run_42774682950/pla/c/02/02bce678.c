/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bce678; name: FUN_02bce678
 */


ulong * FUN_02bce678(undefined8 param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  
  puVar4 = param_2 + 2;
  uVar5 = *param_2;
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = (ulong)puVar4 / param_4;
  }
  lVar6 = (long)puVar4 - uVar2 * param_4;
  param_4 = param_4 - lVar6;
  if (lVar6 == 0 || param_4 == 0) {
    lVar6 = uVar5 + 0x18;
    if (uVar5 < 0x11) {
      lVar6 = 0x28;
    }
    lVar1 = param_3 + 0x18;
    if (param_3 < 0x11) {
      lVar1 = 0x28;
    }
    FUN_02bcefa0(param_1,param_2);
    if (0x27 < (ulong)(lVar6 - lVar1)) {
      uVar3 = FUN_02bcdf98(param_2,param_3);
      FUN_02bce290(param_1,uVar3);
      *(byte *)((long)param_2 + 0xc) = *(byte *)((long)param_2 + 0xc) | 8;
    }
  }
  else {
    param_3 = param_4 + param_3;
    if (uVar5 - *(byte *)((long)param_2 + 0xd) < param_3) {
      param_2 = (ulong *)0x0;
    }
    else {
      lVar6 = uVar5 + 0x18;
      if (uVar5 < 0x11) {
        lVar6 = 0x28;
      }
      lVar1 = param_3 + 0x18;
      if (param_3 < 0x11) {
        lVar1 = 0x28;
      }
      if (0x27 < (ulong)(lVar6 - lVar1)) {
        FUN_02bcefa0(param_1,param_2);
        uVar3 = FUN_02bcdf98(param_2,param_3);
        FUN_02bce290(param_1,uVar3);
        *(byte *)((long)param_2 + 0xc) = *(byte *)((long)param_2 + 0xc) | 8;
      }
      if (param_4 < 0x100) {
        FUN_02bcefa0(param_1,param_2);
        *(char *)((long)puVar4 + ((param_4 & 0xff) - 1)) = (char)param_4;
        *(char *)((long)param_2 + 0xd) = (char)param_4;
      }
      else {
        FUN_02bcefa0(param_1,param_2);
        puVar4 = (ulong *)FUN_02bcdf98(param_2,param_4 - 0x18);
        FUN_02bce290(param_1,param_2);
        *(byte *)((long)puVar4 + 0xc) = *(byte *)((long)puVar4 + 0xc) | 8;
        param_2 = puVar4;
      }
    }
  }
  return param_2;
}


