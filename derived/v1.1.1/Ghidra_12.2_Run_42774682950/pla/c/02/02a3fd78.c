/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3fd78; name: FUN_02a3fd78
 */


void FUN_02a3fd78(long param_1,long param_2,long *param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  
  cVar1 = *(char *)((long)param_3 + 0x5b);
  cVar2 = *(char *)(param_2 + 0x7d);
  if ((*param_4 == '\0') || (param_4[2] != cVar2)) {
    if ((param_4[3] == '\0') || (param_4[5] != cVar2)) {
      if ((param_4[6] == '\0') || (param_4[8] != cVar2)) {
        if ((param_4[9] == '\0') || (param_4[0xb] != cVar2)) {
          if ((param_4[0xc] == '\0') || (param_4[0xe] != cVar2)) {
            if ((param_4[0xf] == '\0') || (param_4[0x11] != cVar2)) {
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
  *(undefined1 *)(param_1 + 4) = uVar3;
  *(undefined1 *)(param_1 + 5) = 6;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  if (((cVar1 == '\x01') && (*(char *)((long)param_3 + 0x5a) != '\0')) && (*param_3 != 0)) {
    cVar1 = *(char *)(*param_3 + 0x7d);
    if ((*param_4 == '\0') || (param_4[2] != cVar1)) {
      if ((param_4[3] == '\0') || (param_4[5] != cVar1)) {
        if ((param_4[6] == '\0') || (param_4[8] != cVar1)) {
          if ((param_4[9] == '\0') || (param_4[0xb] != cVar1)) {
            if ((param_4[0xc] == '\0') || (param_4[0xe] != cVar1)) {
              if ((param_4[0xf] == '\0') || (param_4[0x11] != cVar1)) {
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
    *(undefined1 *)(param_1 + 5) = uVar3;
  }
  return;
}


