/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022c6d4; name: FUN_0022c6d4
 */


undefined8 FUN_0022c6d4(undefined8 *param_1,char *param_2)

{
  char *__s1;
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  
  if (param_2 != (char *)0x0) {
    *param_1 = param_2;
    iVar8 = strncmp(param_2,"SARC",4);
    if (iVar8 == 0) {
      uVar2 = *(ushort *)(param_2 + 6) >> 8;
      uVar3 = *(ushort *)(param_2 + 6) & 0xff;
      if ((uVar3 == 0xff) && (uVar2 == 0xfe)) {
        uVar9 = 1;
      }
      else {
        uVar9 = (uint)(uVar2 != 0xff || uVar3 != 0xfe);
      }
      *(uint *)(param_1 + 6) = uVar9;
      uVar2 = *(ushort *)(param_2 + 0x10);
      uVar3 = uVar2 >> 8 | uVar2 << 8;
      if (uVar9 != 0) {
        uVar3 = uVar2;
      }
      if (uVar3 == 0x100) {
        uVar2 = *(ushort *)(param_2 + 4);
        uVar3 = uVar2 >> 8 | uVar2 << 8;
        if (uVar9 != 0) {
          uVar3 = uVar2;
        }
        if (uVar3 == 0x14) {
          param_1[1] = param_2 + 0x14;
          iVar8 = strncmp(param_2 + 0x14,"SFAT",4);
          if (iVar8 == 0) {
            uVar2 = *(ushort *)(param_2 + 0x18);
            uVar3 = uVar2 >> 8 | uVar2 << 8;
            if (uVar9 != 0) {
              uVar3 = uVar2;
            }
            if (uVar3 == 0xc) {
              uVar3 = *(ushort *)(param_2 + 0x1a);
              uVar6 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
              if (uVar9 != 0) {
                uVar6 = (uint)uVar3;
              }
              if (uVar6 >> 0xe == 0) {
                *(int *)(param_1 + 4) = (int)(short)uVar6;
                uVar2 = *(ushort *)(param_2 + 4);
                bVar7 = uVar9 != 0;
                uVar3 = uVar2 >> 8 | uVar2 << 8;
                if (bVar7) {
                  uVar3 = uVar2;
                }
                uVar4 = *(ushort *)(param_2 + 0x18);
                uVar2 = uVar4 >> 8 | uVar4 << 8;
                if (bVar7) {
                  uVar2 = uVar4;
                }
                param_1[3] = param_2 + (long)(short)uVar2 + (long)(short)uVar3;
                uVar2 = *(ushort *)(param_2 + 4);
                uVar3 = uVar2 >> 8 | uVar2 << 8;
                if (bVar7) {
                  uVar3 = uVar2;
                }
                uVar4 = *(ushort *)(param_2 + 0x18);
                uVar2 = uVar4 >> 8 | uVar4 << 8;
                if (bVar7) {
                  uVar2 = uVar4;
                }
                uVar5 = *(ushort *)(param_2 + 0x1a);
                uVar4 = uVar5 >> 8 | uVar5 << 8;
                if (bVar7) {
                  uVar4 = uVar5;
                }
                __s1 = param_2 + (long)(short)uVar4 * 0x10 + (long)(short)uVar2 + (long)(short)uVar3
                ;
                iVar8 = strncmp(__s1,"SFNT",4);
                if (iVar8 == 0) {
                  uVar2 = *(ushort *)(__s1 + 4);
                  uVar3 = uVar2 >> 8 | uVar2 << 8;
                  if (uVar9 != 0) {
                    uVar3 = uVar2;
                  }
                  if (uVar3 == 8) {
                    param_1[2] = __s1 + 8;
                    uVar1 = *(uint *)(param_2 + 0xc);
                    uVar6 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                    if (uVar9 != 0) {
                      uVar6 = uVar1;
                    }
                    if ((long)(__s1 + 8) - (long)param_2 <= (long)(int)uVar6) {
                      param_1[5] = param_2 + (int)uVar6;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


