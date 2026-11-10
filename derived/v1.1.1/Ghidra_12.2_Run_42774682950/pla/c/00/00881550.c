/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00881550; name: FUN_00881550
 */


ulong FUN_00881550(long param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = *(undefined1 *)(*(long *)(param_1 + 0x58) + 0xf1);
  FUN_02940e84();
  uVar7 = FUN_0295e400();
  uVar7 = FUN_0294d654(uVar7,uVar3);
  uVar4 = FUN_0294c46c();
  uVar1 = param_3 & 0xff;
  uVar4 = uVar4 & 0xff;
  if (uVar1 < uVar4) {
    FUN_0294c474(uVar7,param_3);
    uVar5 = FUN_02950b64();
    if (param_2 == (undefined1 *)0x0) {
      uVar9 = (ulong)(uVar5 & 1);
      if (uVar1 + 1 != uVar4) {
        FUN_0294c474(uVar7);
        uVar6 = FUN_02950b64();
        uVar5 = (uVar5 & 1) + (uVar6 & 1);
        for (uVar1 = uVar1 + 2; uVar9 = (ulong)uVar5, uVar1 != uVar4; uVar1 = uVar1 + 1) {
          FUN_0294c474(uVar7,uVar1);
          uVar6 = FUN_02950b64();
          uVar5 = uVar5 + (uVar6 & 1);
        }
      }
    }
    else {
      bVar2 = (uVar5 & 1) != 0;
      if (bVar2) {
        *param_2 = (char)param_3;
      }
      uVar9 = (ulong)bVar2;
      uVar5 = uVar1 + 1;
      if (uVar5 != uVar4) {
        FUN_0294c474(uVar7,uVar5);
        uVar8 = FUN_02950b64();
        if ((uVar8 & 1) != 0) {
          param_2[uVar9] = (char)uVar5;
          uVar9 = (ulong)(bVar2 + 1);
        }
        for (uVar1 = uVar1 + 2; uVar1 != uVar4; uVar1 = uVar1 + 1) {
          FUN_0294c474(uVar7,uVar1);
          uVar8 = FUN_02950b64();
          if ((uVar8 & 1) != 0) {
            uVar8 = uVar9 & 0xff;
            uVar9 = (ulong)((int)uVar9 + 1);
            param_2[uVar8] = (char)uVar1;
          }
        }
      }
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}


