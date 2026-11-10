/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00841728; name: FUN_00841728
 */


void FUN_00841728(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (*(long *)(param_2 + 0x70) == 0) {
    local_40[0] = 0x10408;
  }
  else {
    lVar1 = FUN_00847388();
    if ((lVar1 != 0) && (uVar2 = FUN_0084bbb0(*(undefined8 *)(param_2 + 0x70)), (uVar2 & 1) != 0)) {
      if (*(short *)(param_2 + 0x5a) == 0) {
LAB_008417d8:
        uVar2 = FUN_0084f368(*(undefined8 *)(param_2 + 0x70));
        if ((uVar2 & 1) != 0) {
          local_40[0] = 0;
          goto LAB_008417fc;
        }
      }
      else {
        uVar5 = 0;
        lVar1 = FUN_008420cc(*(undefined8 *)(param_2 + 0x70),0);
        if (lVar1 != 0) goto LAB_00841798;
        do {
          do {
            uVar5 = uVar5 + 1;
            if ((uint)*(ushort *)(param_2 + 0x5a) <= (uVar5 & 0xffff)) goto LAB_008417d8;
            lVar1 = FUN_008420cc(*(undefined8 *)(param_2 + 0x70),uVar5);
          } while (lVar1 == 0);
LAB_00841798:
          plVar3 = (long *)FUN_00847434(param_2);
          uVar4 = FUN_008420cc(*(undefined8 *)(param_2 + 0x70),uVar5);
          uVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,uVar4);
        } while ((uVar2 & 1) != 0);
      }
    }
    local_40[0] = 0x2c09;
  }
LAB_008417fc:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


