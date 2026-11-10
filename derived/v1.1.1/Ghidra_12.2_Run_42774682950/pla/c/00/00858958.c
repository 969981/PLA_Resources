/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00858958; name: FUN_00858958
 */


void FUN_00858958(undefined8 param_1,long param_2,ushort param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_60 [4];
  undefined4 local_48 [2];
  
  if (param_3 == 0) {
    local_60[0] = 0x10407;
    goto LAB_00858b50;
  }
  uVar4 = FUN_00840df0();
  if ((uVar4 & 1) == 0) {
    local_60[0] = 0x1040c;
    goto LAB_00858b50;
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    local_60[0] = 0x10402;
    goto LAB_00858b50;
  }
  uVar5 = FUN_007e336c();
  puVar6 = (undefined8 *)FUN_0081a750(0x40,uVar5);
  if (puVar6 == (undefined8 *)0x0) {
LAB_00858a70:
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_007e8f94();
    puVar6[3] = 0;
    puVar6[4] = 0;
    FUN_007e8f94();
    puVar6[6] = 0;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined4 *)((long)puVar6 + 0x2c) = 0;
    *(undefined8 **)(param_2 + 0x68) = puVar6;
    puVar3 = PTR_DAT_043773c0;
    uVar2 = (uint)param_3 * (*(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) - 1) * 0x5c0;
    uVar5 = FUN_007e336c();
    puVar6 = (undefined8 *)FUN_0081a750((ulong)uVar2,uVar5);
    if (puVar6 == (undefined8 *)0x0 || uVar2 == 0) {
      *(undefined8 **)(param_2 + 0x60) = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        *(undefined8 *)(param_2 + 0x60) = 0;
        if (*(long *)(param_2 + 0x68) != 0) {
          FUN_0081a800();
          goto LAB_00858a70;
        }
        goto LAB_00858b3c;
      }
    }
    else {
      uVar4 = 0;
      do {
        *(undefined4 *)((long)puVar6 + uVar4) = 0;
        uVar4 = uVar4 + 4;
      } while (uVar2 != uVar4);
      *(undefined8 **)(param_2 + 0x60) = puVar6;
    }
    uVar2 = (*(ushort *)(*(long *)puVar3 + 0x50) - 1) * (uint)param_3;
    if (uVar2 != 0) {
      lVar7 = *(long *)(param_2 + 0x68);
      *(undefined8 **)(lVar7 + 0x30) = puVar6;
      *(uint *)(lVar7 + 0x38) = uVar2;
      *puVar6 = 0;
      puVar6[1] = 0;
      lVar1 = lVar7 + 0x18;
      FUN_007e8fa0(lVar1,lVar1,(long)*(int *)(lVar7 + 0x2c) + (long)puVar6);
      if (uVar2 != 1) {
        lVar8 = (ulong)uVar2 - 1;
        lVar9 = 0x5c0;
        do {
          puVar6 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar9);
          *puVar6 = 0;
          puVar6[1] = 0;
          FUN_007e8fa0(lVar1,lVar1,(long)*(int *)(lVar7 + 0x2c) + (long)puVar6);
          lVar9 = lVar9 + 0x5c0;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
    if (*(long *)(param_2 + 0x68) != 0) {
      local_60[0] = 0;
      *(ushort *)(PTR_DAT_043773b8 + 0x3ca) = (*(short *)(*(long *)puVar3 + 0x50) + -1) * param_3;
      goto LAB_00858b50;
    }
  }
LAB_00858b3c:
  *(undefined8 *)(param_2 + 0x68) = 0;
  local_60[0] = 0x10401;
LAB_00858b50:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_48);
  FUN_007ee578(param_1,local_60);
  return;
}


