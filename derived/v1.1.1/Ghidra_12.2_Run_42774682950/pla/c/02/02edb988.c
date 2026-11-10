/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edb988; name: FUN_02edb988
 */


undefined8 FUN_02edb988(long param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    if ((*(uint *)(param_1 + 0x28) & 1) == 0) {
      uVar5 = FUN_02edbe7c(param_1);
      bVar1 = *(byte *)(param_1 + 0x28);
    }
    else {
      DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
      uVar2 = *(ushort *)(param_1 + 0x22);
      uVar3 = 0;
      uVar7 = (uint)((ulong)DAT_0440a190 >> 0x21);
      if (uVar2 != 0) {
        uVar3 = uVar7 / uVar2;
      }
      uVar7 = uVar7 - uVar3 * uVar2;
      uVar8 = (ulong)uVar7;
      *(short *)(param_1 + 0x20) = (short)uVar7;
      if ((*(uint *)(param_1 + 0x28) >> 1 & 1) != 0) {
        *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 8) + (ulong)uVar7 * 0x18;
      }
      plVar6 = *(long **)(param_1 + 0x10);
      if (plVar6 == (long *)0x0) {
        uVar5 = 0;
        bVar1 = *(byte *)(param_1 + 0x28);
      }
      else {
        uVar7 = *(uint *)(plVar6 + 1);
        if (uVar7 == 0) {
          uVar5 = 1;
        }
        else {
          bVar4 = *(char *)*plVar6 != '\0';
          if (uVar7 != 1) {
            uVar5 = 1;
            do {
              if (bVar4) {
                bVar4 = *(char *)(*plVar6 + uVar5) != '\0';
              }
              else {
                bVar4 = false;
              }
              uVar5 = uVar5 + 1;
            } while (uVar7 != uVar5);
          }
          if (bVar4) {
            *(undefined1 *)*plVar6 = 0;
            if (1 < *(uint *)(plVar6 + 1)) {
              uVar5 = 1;
              do {
                *(undefined1 *)(*plVar6 + uVar5) = 0;
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(uint *)(plVar6 + 1));
            }
            plVar6 = *(long **)(param_1 + 0x10);
            uVar5 = 1;
            uVar8 = (ulong)*(ushort *)(param_1 + 0x20);
          }
          else {
            uVar5 = 0;
          }
        }
        *(undefined1 *)(*plVar6 + (uVar8 & 0xffff)) = 1;
        bVar1 = *(byte *)(param_1 + 0x28);
      }
    }
    if (((bVar1 >> 1 & 1) != 0) && (((uVar5 & 1) == 0 || (*(char *)(param_1 + 0x2d) != '\0')))) {
      *(undefined2 *)(param_1 + 0x24) = 0;
      return 1;
    }
  }
  return 0x11;
}


