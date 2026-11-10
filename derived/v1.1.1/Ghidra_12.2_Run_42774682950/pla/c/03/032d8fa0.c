/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d8fa0; name: FUN_032d8fa0
 */


void FUN_032d8fa0(long param_1,ulong *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  *(ulong *)(param_1 + 0x68) = param_2[1];
  lVar6 = 0;
  uVar4 = *param_2 & (ulong)param_3;
  *(ulong *)(param_1 + 0x70) = uVar4;
  while( true ) {
    uVar3 = (ulong)(uint)(1 << (ulong)((uint)lVar6 & 0x1f));
    if ((((uVar4 & uVar3) == 0) || ((*param_2 & uVar3) == 0)) ||
       (puVar2 = (undefined8 *)FUN_032e2008(param_2), puVar2 == (undefined8 *)0x0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *puVar2;
    }
    *(undefined8 *)(param_1 + 0x78 + lVar6 * 8) = uVar5;
    if (lVar6 == 0x1f) break;
    uVar4 = *(ulong *)(param_1 + 0x70);
    lVar6 = lVar6 + 1;
  }
  uVar1 = FUN_032e2598(param_2);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  return;
}


