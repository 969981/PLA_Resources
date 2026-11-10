/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f721c; name: FUN_007f721c
 */


undefined8 FUN_007f721c(long *param_1,undefined8 param_2)

{
  short sVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [32];
  
  (**(code **)(*(long *)param_1[0x25] + 0x48))((long *)param_1[0x25],param_2,param_1[0x22e]);
  lVar4 = param_1[0x22e];
  if (*(short *)((long)param_1 + 0x114e) != 0) {
    uVar3 = 0;
    do {
      uVar2 = FUN_007f0f48(*(long *)(param_1[0x11] + uVar3 * 8) + 0x10,lVar4);
      if ((uVar2 & 1) != 0) goto LAB_007f727c;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((long)param_1 + 0x114e));
  }
  uVar3 = 0xffff;
LAB_007f727c:
  uVar2 = (**(code **)(*(long *)param_1[0x24] + 0x90))();
  sVar1 = (short)uVar3;
  if ((uVar2 & 1) == 0) {
    FUN_007f0d08(auStack_40,lVar4);
    lVar4 = *(long *)PTR_DAT_04377550;
    if ((lVar4 != 0) && ((char)param_1[0x22a] != '\0')) {
      FUN_0082afc8(lVar4,auStack_40);
      FUN_0082abd8(lVar4,auStack_40,0xffffffff);
    }
    if (sVar1 < 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1[0x11] + (long)sVar1 * 8);
    *(undefined2 *)(lVar4 + 8) = 0xff00;
    *(undefined1 *)(lVar4 + 10) = 0;
    FUN_007f0d58(lVar4 + 0x10);
    uVar5 = 1;
  }
  else {
    (**(code **)(*param_1 + 0x218))(param_1,lVar4,uVar3 & 0xffffffff);
    uVar5 = 0;
    if (sVar1 < 0) {
      return 0;
    }
  }
  FUN_00805e18(param_1[0x31],uVar3 & 0xffffffff);
  FUN_00805e18(param_1[0x32],uVar3 & 0xffffffff);
  return uVar5;
}


