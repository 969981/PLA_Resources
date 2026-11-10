/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e0f10; name: FUN_029e0f10
 */


void FUN_029e0f10(long param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar6 = (ulong)*param_3;
  uVar7 = (ulong)param_3[1];
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x120;
  lVar5 = *(long *)(lVar1 + uVar7 * 8);
  if ((*(byte *)(*(long *)(lVar1 + uVar6 * 8) + 0x120) & 7) != 0) {
    FUN_02987998(*(undefined8 *)(param_1 + 0x38),lVar5);
    uVar6 = (ulong)*param_3;
    uVar7 = (ulong)param_3[1];
  }
  lVar8 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0x10) + 8) + 0x120;
  FUN_029528d0(*(undefined8 *)(lVar1 + uVar7 * 8),*(undefined8 *)(lVar1 + uVar6 * 8));
  FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x37,uVar6,uVar7);
  if (*(short *)(lVar5 + 0x496) == 0) {
    return;
  }
  pcVar4 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  bVar2 = param_3[1];
  if ((*pcVar4 == '\0') || (pcVar4[2] != bVar2)) {
    if ((pcVar4[3] == '\0') || (pcVar4[5] != bVar2)) {
      if ((pcVar4[6] == '\0') || (pcVar4[8] != bVar2)) {
        if ((pcVar4[9] == '\0') || (pcVar4[0xb] != bVar2)) {
          if ((pcVar4[0xc] == '\0') || (pcVar4[0xe] != bVar2)) {
            if ((pcVar4[0xf] == '\0') || (pcVar4[0x11] != bVar2)) {
              uVar3 = 6;
            }
            else {
              uVar3 = 5;
            }
          }
          else {
            uVar3 = 4;
          }
        }
        else {
          uVar3 = 3;
        }
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x90,uVar3);
  return;
}


