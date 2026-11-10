/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082e308; name: FUN_0082e308
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082e308(undefined8 param_1,ushort *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_58;
  int local_48 [4];
  undefined4 local_38 [2];
  
  uVar4 = FUN_0082deb0(param_3 + 8);
  bVar2 = FUN_0082e514(param_2,uVar4);
  if (bVar2 == 0xff) {
    local_48[0] = 0x10408;
    local_58 = (ulong)local_58._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)&local_58);
    piVar7 = local_48;
    goto LAB_0082e4f8;
  }
  local_58 = FUN_0082deb0(param_3 + 8);
  if (*(code **)(param_2 + 0x2c) == (code *)0x0) {
    uVar3 = (uint)local_58;
    uVar8 = (uint)(local_58 >> 0x20);
    uVar3 = (uVar3 >> 8 & 0xff) + (uVar3 & 0xff) + ((uint)(local_58 >> 0x10) & 0xff) +
            (uVar3 >> 0x18) + (uVar8 & 0xff) + (uVar8 >> 8 & 0xff) +
            ((ushort)(local_58 >> 0x30) & 0xff) + (uint)(byte)(local_58 >> 0x38);
    uVar8 = *(uint *)(param_2 + 0xc);
    uVar1 = 0;
    if (uVar8 != 0) {
      uVar1 = uVar3 / uVar8;
    }
    uVar5 = (ulong)(uVar3 - uVar1 * uVar8);
  }
  else {
    uVar5 = (**(code **)(param_2 + 0x2c))(&local_58,*(undefined4 *)(param_2 + 0xc));
  }
  FUN_00831694(local_48,*(long *)(param_2 + 0x10) + (uVar5 & 0xffffffff) * 0x18,&local_58);
  if (local_48[0] != 0) {
    piVar7 = local_48;
    goto LAB_0082e4f8;
  }
  if ((ushort)bVar2 < *param_2) {
    lVar9 = *(long *)(param_2 + 4) + (ulong)bVar2 * 0x20;
    uVar5 = (ulong)*(byte *)(param_3 + 0x90);
    if (uVar5 == 0xfd) goto LAB_0082e4c0;
LAB_0082e424:
    if (*(char *)(param_3 + 0x91) == -3) goto LAB_0082e4c0;
    if ((uint)uVar5 < (uint)*(byte *)((long)param_2 + 3)) {
      lVar6 = *(long *)(param_2 + 8) + uVar5 * 0x18;
      uVar5 = FUN_007e9010(lVar6,*(int *)(lVar6 + 0x14) + lVar9);
    }
    else {
      uVar5 = FUN_007e9010(0,_DAT_00000014 + lVar9);
    }
    if ((uVar5 & 1) != 0) {
      if (*(byte *)(param_3 + 0x90) < *(byte *)((long)param_2 + 3)) {
        lVar6 = *(long *)(param_2 + 8) + (ulong)*(byte *)(param_3 + 0x90) * 0x18;
      }
      else {
        lVar6 = 0;
      }
      FUN_007e8fec(lVar6,*(int *)(lVar6 + 0x14) + lVar9);
      goto LAB_0082e4c0;
    }
    local_58._4_4_ = (uint)(local_58 >> 0x20);
    local_58 = CONCAT44(local_58._4_4_,0x10408);
  }
  else {
    lVar9 = 0;
    uVar5 = (ulong)*(byte *)(param_3 + 0x90);
    if (uVar5 != 0xfd) goto LAB_0082e424;
LAB_0082e4c0:
    param_2[2] = param_2[2] - 1;
    *(undefined8 *)(lVar9 + 0x10) = 0;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(undefined1 *)(lVar9 + 0x1c) = 0xff;
    local_58 = local_58 & 0xffffffff00000000;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
  piVar7 = (int *)&local_58;
LAB_0082e4f8:
  FUN_007ee578(param_1,piVar7);
  return;
}


