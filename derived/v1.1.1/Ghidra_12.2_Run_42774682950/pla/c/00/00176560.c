/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00176560; name: FUN_00176560
 */


void FUN_00176560(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x20);
  uVar3 = *(uint *)(*(long *)(lVar8 + 0x28) + -4);
  if ((uVar3 & 0x3f) - 6 < 0x24) {
    lVar6 = *(long *)(lVar8 + 0x20);
    switch(uVar3 & 0x3f) {
    default:
      puVar1 = (undefined8 *)(lVar6 + (ulong)(byte)(uVar3 >> 6) * 0x10);
      lVar8 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar8 + -0x10;
      uVar2 = *(undefined8 *)(lVar8 + -8);
      *puVar1 = *(undefined8 *)(lVar8 + -0x10);
      puVar1[1] = uVar2;
      break;
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0x1b:
    case 0x1e:
    case 0x22:
    case 0x23:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
      break;
    case 0x1d:
      lVar7 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar7 + -0x30) = *(undefined8 *)(lVar7 + -0x10);
      *(undefined8 *)(lVar7 + -0x28) = *(undefined8 *)(lVar7 + -8);
      if (1 < (int)((lVar7 + -0x20) - (lVar6 + ((ulong)(uVar3 >> 0x13) & 0x1ff0)) >> 4)) {
        *(long *)(param_1 + 0x10) = lVar7 + -0x20;
        FUN_00176070(param_1);
      }
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x20) + (ulong)(byte)(uVar3 >> 6) * 0x10);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
      *puVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
      puVar1[1] = uVar2;
    case 0x29:
switchD_001765a8_caseD_29:
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar8 + 8);
      return;
    case 0x1f:
    case 0x20:
    case 0x21:
      lVar6 = *(long *)(param_1 + 0x10);
      if (*(int *)(lVar6 + -8) == 0) {
        uVar5 = 1;
        *(long *)(param_1 + 0x10) = lVar6 + -0x10;
        uVar4 = *(ushort *)(lVar8 + 0x42);
      }
      else if (*(int *)(lVar6 + -8) == 1) {
        uVar5 = (uint)(*(int *)(lVar6 + -0x10) == 0);
        *(long *)(param_1 + 0x10) = lVar6 + -0x10;
        uVar4 = *(ushort *)(lVar8 + 0x42);
      }
      else {
        uVar5 = 0;
        *(long *)(param_1 + 0x10) = lVar6 + -0x10;
        uVar4 = *(ushort *)(lVar8 + 0x42);
      }
      if ((uVar4 >> 7 & 1) == 0) {
        if ((uVar5 ^ 1) != (uVar3 >> 6 & 0xff)) goto LAB_001766b8;
      }
      else {
        *(ushort *)(lVar8 + 0x42) = uVar4 ^ 0x80;
        if (uVar5 != (uVar3 >> 6 & 0xff)) {
LAB_001766b8:
          *(long *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + 4;
          return;
        }
      }
      break;
    case 0x24:
      if ((uVar3 & 0x7fc000) != 0) goto switchD_001765a8_caseD_29;
    }
  }
  return;
}


