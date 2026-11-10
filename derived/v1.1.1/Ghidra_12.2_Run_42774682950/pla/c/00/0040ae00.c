/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040ae00; name: FUN_0040ae00
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_0040ae00(byte *param_1,long param_2,long param_3,FILE *param_4)

{
  char *pcVar1;
  byte *__s;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 local_70 [2];
  ulong local_68;
  char *local_58;
  
  uVar11 = param_3 * param_2;
  if (*(FILE **)PTR_stdout_04372328 == param_4 || *(FILE **)PTR_stderr_04372330 == param_4) {
    if ((int)uVar11 == 1) {
      fputc((uint)*param_1,param_4);
      return uVar11;
    }
    __s = &DAT_038da8c3;
    if (param_1 != (byte *)0x0) {
      __s = param_1;
    }
    fputs((char *)__s,param_4);
    return uVar11;
  }
  if (*(FILE **)PTR_stdin_04372360 == param_4) {
    return uVar11;
  }
  pcVar3 = param_4->_IO_read_ptr;
  local_58 = (char *)0x0;
  uVar8 = nn::fs::GetFileSize(&local_58,*(undefined8 *)param_4);
  pcVar7 = local_58;
  if (uVar8 == 0) {
    if ((*(byte *)&param_4->_IO_read_end >> 2 & 1) == 0) {
      if (local_58 != pcVar3 + uVar11) {
        nn::fs::SetFileSize(*(undefined8 *)param_4);
      }
LAB_0040aef8:
      local_68 = local_68 & 0xffffffff00000000;
      uVar8 = nn::fs::WriteFile(*(undefined8 *)param_4,pcVar3,param_1,uVar11,&local_68);
      if (uVar8 == 0) {
        param_4->_IO_read_ptr = param_4->_IO_read_ptr + uVar11;
        return uVar11;
      }
      if (local_58 != pcVar3 + uVar11) {
        nn::fs::SetFileSize(*(undefined8 *)param_4);
      }
      goto joined_r0x0040af3c;
    }
    if ((long)local_58 < (long)pcVar3) {
      return 0;
    }
    pcVar1 = pcVar3 + uVar11;
    uVar2 = (long)local_58 - (long)pcVar3;
    pcVar5 = pcVar1 + -(long)local_58;
    if (pcVar1 + -(long)local_58 == (char *)0x0 || (long)pcVar1 < (long)local_58) {
      uVar2 = uVar11;
      pcVar5 = local_58 + uVar11;
    }
    pvVar9 = calloc(1,0x2000);
    if (pvVar9 != (void *)0x0) {
      local_68 = 0;
      if (uVar2 != 0) {
        local_68 = uVar2;
        if (0x1fff < (long)uVar2) {
          local_68 = 0x2000;
        }
        uVar8 = nn::fs::ReadFile(&local_68,*(undefined8 *)param_4,(long)pcVar7 - local_68,pvVar9);
        if (uVar8 == 0) {
          lVar12 = 0;
          lVar13 = 0;
          do {
            local_70[0] = 0;
            uVar8 = nn::fs::WriteFile(*(undefined8 *)param_4,pcVar5 + (lVar13 - local_68),pvVar9,
                                      local_68,local_70);
            if (uVar8 != 0) break;
            lVar12 = local_68 + lVar12;
            uVar4 = uVar2 - lVar12;
            if (uVar4 == 0) goto LAB_0040aef8;
            if (0x1fff < (long)uVar4) {
              uVar4 = 0x2000;
            }
            lVar13 = -lVar12;
            local_68 = uVar4;
            uVar8 = nn::fs::ReadFile(&local_68,*(undefined8 *)param_4,local_58 + (lVar13 - uVar4),
                                     pvVar9);
          } while (uVar8 == 0);
        }
        if ((uVar8 & 0x1ff) == 2) {
          uVar6 = uVar8 & 0x3ffe00;
          if (uVar6 == 0x400) {
            uVar10 = 0x11;
          }
          else if (uVar6 == 0x200) {
            uVar10 = 2;
          }
          else {
            uVar8 = uVar8 >> 9 & 0x1fff;
            if (uVar8 - 0x1e < 0x10) {
              uVar10 = 0x1c;
            }
            else if (uVar6 < 0x1a00) {
              if (uVar6 == 0xe00) {
                uVar10 = 0x10;
              }
              else if (uVar6 == 0x1000) {
                uVar10 = 0x27;
              }
              else {
LAB_0040b254:
                if (299 < uVar8 - 0xc80) {
                  if (999 < uVar8 - 4000) goto LAB_0040b0b4;
                  uVar10 = 5;
                  goto LAB_0040b0b8;
                }
                uVar10 = 0xc;
              }
            }
            else if (uVar6 == 0x1a00) {
              uVar10 = 0xb;
            }
            else if (uVar6 == 0x177200) {
              uVar10 = 0x26;
            }
            else {
              if (uVar6 != 0x177a00) goto LAB_0040b254;
              uVar10 = 0x1d;
            }
          }
          *(undefined4 *)((long)&param_4->_IO_read_end + 4) = uVar10;
        }
        else {
LAB_0040b0b4:
          uVar10 = 0xffff;
LAB_0040b0b8:
          *(undefined4 *)((long)&param_4->_IO_read_end + 4) = uVar10;
        }
        return 0;
      }
      goto LAB_0040aef8;
    }
LAB_0040b170:
    *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 0xc;
  }
  else {
joined_r0x0040af3c:
    if ((uVar8 & 0x1ff) == 2) {
      uVar6 = uVar8 & 0x3ffe00;
      if (uVar6 == 0x400) {
        *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 0x11;
        return 0;
      }
      if (uVar6 == 0x200) {
        *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 2;
        return 0;
      }
      uVar8 = uVar8 >> 9 & 0x1fff;
      if (uVar8 - 0x1e < 0x10) {
        *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 0x1c;
        return 0;
      }
      if (uVar6 < 0x1a00) {
        if (uVar6 == 0xe00) {
          *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 0x10;
          return 0;
        }
        if (uVar6 == 0x1000) {
          *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 0x27;
          return 0;
        }
      }
      else {
        if (uVar6 == 0x1a00) {
          *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 0xb;
          return 0;
        }
        if (uVar6 == 0x177200) {
          *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 0x26;
          return 0;
        }
        if (uVar6 == 0x177a00) {
          *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 0x1d;
          return 0;
        }
      }
      if (uVar8 - 0xc80 < 300) goto LAB_0040b170;
      if (uVar8 - 4000 < 1000) {
        *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 5;
        return 0;
      }
    }
    *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 0xffff;
  }
  return 0;
}


