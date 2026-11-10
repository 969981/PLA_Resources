/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056796c; name: FUN_0056796c
 */


undefined8 FUN_0056796c(byte *param_1,byte *param_2)

{
  char cVar1;
  ushort uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  
  if (*param_1 - 7 < 4) {
    uVar2 = *(ushort *)(param_1 + 6);
    pbVar7 = param_1 + 8;
    if (uVar2 < 2) {
      cVar1 = **(char **)pbVar7;
    }
    else {
      cVar1 = *(char *)**(undefined8 **)pbVar7;
    }
    if (cVar1 != '\x03') {
      if (uVar2 < 2) {
        cVar1 = **(char **)pbVar7;
      }
      else {
        cVar1 = *(char *)**(undefined8 **)pbVar7;
      }
      if (cVar1 != '\x14') {
        if (uVar2 < 2) {
          cVar1 = **(char **)pbVar7;
        }
        else {
          cVar1 = *(char *)**(undefined8 **)pbVar7;
        }
        if (cVar1 != '\f') {
          if (uVar2 < 2) {
            cVar1 = **(char **)pbVar7;
          }
          else {
            cVar1 = *(char *)**(undefined8 **)pbVar7;
          }
          if (cVar1 != '\r') {
            return 0;
          }
        }
      }
    }
    if (*param_2 - 7 < 4) {
      if (uVar2 < 2) {
        pbVar4 = pbVar7;
      }
      else {
        pbVar4 = *(byte **)pbVar7;
      }
      pbVar5 = param_2 + 8;
      if (1 < *(ushort *)(param_2 + 6)) {
        pbVar5 = *(byte **)pbVar5;
      }
      uVar3 = FUN_0055eca4(*(long *)pbVar4,*(undefined8 *)pbVar5);
      if (((uVar3 & 1) != 0) &&
         (((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) >> 6 & 1) == 0)) {
        return 1;
      }
    }
    if (*(ushort *)(param_1 + 6) < 2) {
      uVar3 = FUN_0055eca4(*(long *)pbVar7,param_2);
    }
    else {
      uVar3 = FUN_0055eca4(**(undefined8 **)pbVar7,param_2);
    }
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    uVar2 = *(ushort *)(param_1 + 6);
    if (uVar2 < 2) {
      cVar1 = **(char **)pbVar7;
    }
    else {
      cVar1 = *(char *)**(undefined8 **)pbVar7;
    }
    if ((cVar1 == '\x03') && (*param_2 == 4)) {
      if (uVar2 < 2) {
        pcVar6 = *(char **)pbVar7;
        cVar1 = *pcVar6;
      }
      else {
        pcVar6 = (char *)**(undefined8 **)pbVar7;
        cVar1 = *pcVar6;
      }
      if (cVar1 != '\x03') {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(op_) == (kRegexpLiteral)","external/com_github_google_re2\\re2/regexp.h",
                      0x150,"rune");
      }
      if (**(int **)(param_2 + 0x20) == *(int *)(pcVar6 + 0x18)) {
        if (1 < uVar2) {
          pbVar7 = *(byte **)pbVar7;
        }
        if (((*(ushort *)(param_2 + 2) ^ *(ushort *)(*(long *)pbVar7 + 2)) & 1) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


