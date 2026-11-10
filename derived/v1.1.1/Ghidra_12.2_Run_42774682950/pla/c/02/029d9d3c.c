/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d9d3c; name: FUN_029d9d3c
 */


void FUN_029d9d3c(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  char *pcVar6;
  
  if ((param_5 & 1) == 0) {
    if (param_4 != 1) {
      lVar5 = *(long *)(param_1 + 0x20);
      pcVar6 = *(char **)(*(long *)(lVar5 + 0x10) + 0xa8);
      cVar4 = *(char *)(param_2 + 0x7d);
      if ((*pcVar6 == '\0') || (pcVar6[2] != cVar4)) {
        if ((pcVar6[3] != '\0') && (pcVar6[5] == cVar4)) {
          uVar2 = 1;
          goto LAB_029d9fa8;
        }
        if ((pcVar6[6] != '\0') && (pcVar6[8] == cVar4)) {
          uVar2 = 2;
          goto LAB_029d9fa8;
        }
        if ((pcVar6[9] != '\0') && (pcVar6[0xb] == cVar4)) {
          uVar2 = 3;
          goto LAB_029d9fa8;
        }
        if ((pcVar6[0xc] != '\0') && (pcVar6[0xe] == cVar4)) {
          uVar2 = 4;
          goto LAB_029d9fa8;
        }
        if ((pcVar6[0xf] != '\0') && (pcVar6[0x11] == cVar4)) {
          uVar2 = 5;
          goto LAB_029d9fa8;
        }
      }
      else {
        uVar2 = 0;
LAB_029d9fa8:
        FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x8a,uVar2,0x85);
        lVar5 = *(long *)(param_1 + 0x20);
      }
      uVar2 = *(undefined8 *)(lVar5 + 0x18);
      uVar3 = 0x96;
      uVar1 = 0;
      goto LAB_029d9fcc;
    }
    uVar1 = FUN_02997d00(*(undefined8 *)(param_1 + 0x38));
    lVar5 = *(long *)(param_1 + 0x20);
    pcVar6 = *(char **)(*(long *)(lVar5 + 0x10) + 0xa8);
    cVar4 = *(char *)(param_3 + 0x7d);
    if ((*pcVar6 == '\0') || (pcVar6[2] != cVar4)) {
      if ((pcVar6[3] == '\0') || (pcVar6[5] != cVar4)) {
        if ((pcVar6[6] == '\0') || (pcVar6[8] != cVar4)) {
          if ((pcVar6[9] == '\0') || (pcVar6[0xb] != cVar4)) {
            if ((pcVar6[0xc] == '\0') || (pcVar6[0xe] != cVar4)) {
              if (pcVar6[0xf] == '\0') {
                return;
              }
              if (pcVar6[0x11] != cVar4) {
                return;
              }
              cVar4 = '\x05';
            }
            else {
              cVar4 = '\x04';
            }
          }
          else {
            cVar4 = '\x03';
          }
        }
        else {
          cVar4 = '\x02';
        }
      }
      else {
        cVar4 = '\x01';
      }
    }
    else {
      cVar4 = '\0';
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    pcVar6 = *(char **)(*(long *)(lVar5 + 0x10) + 0xa8);
    cVar4 = *(char *)(param_3 + 0x7d);
    if ((*pcVar6 == '\0') || (pcVar6[2] != cVar4)) {
      if ((pcVar6[3] == '\0') || (pcVar6[5] != cVar4)) {
        if ((pcVar6[6] == '\0') || (pcVar6[8] != cVar4)) {
          if ((pcVar6[9] == '\0') || (pcVar6[0xb] != cVar4)) {
            if ((pcVar6[0xc] == '\0') || (pcVar6[0xe] != cVar4)) {
              if ((pcVar6[0xf] == '\0') || (pcVar6[0x11] != cVar4)) {
                return;
              }
              cVar4 = '\x05';
            }
            else {
              cVar4 = '\x04';
            }
          }
          else {
            cVar4 = '\x03';
          }
        }
        else {
          cVar4 = '\x02';
        }
      }
      else {
        cVar4 = '\x01';
      }
    }
    else {
      cVar4 = '\0';
    }
    uVar1 = 0x84;
  }
  uVar3 = 0x8a;
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
LAB_029d9fcc:
  FUN_02a3e6b8(uVar2,uVar3,cVar4,uVar1);
  return;
}


