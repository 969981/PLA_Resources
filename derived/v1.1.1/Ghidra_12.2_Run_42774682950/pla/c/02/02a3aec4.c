/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3aec4; name: FUN_02a3aec4
 */


void FUN_02a3aec4(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  uVar1 = *(undefined1 *)(param_2 + 0x7d);
  cVar2 = *(char *)(param_3 + 0x7d);
  pcVar4 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  if ((*pcVar4 == '\0') || (pcVar4[2] != cVar2)) {
    if ((pcVar4[3] == '\0') || (pcVar4[5] != cVar2)) {
      if ((pcVar4[6] == '\0') || (pcVar4[8] != cVar2)) {
        if ((pcVar4[9] == '\0') || (pcVar4[0xb] != cVar2)) {
          if ((pcVar4[0xc] == '\0') || (pcVar4[0xe] != cVar2)) {
            if ((pcVar4[0xf] == '\0') || (pcVar4[0x11] != cVar2)) {
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
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x8a,uVar3,0x9a);
  FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9c,0x406,uVar1,0xffff0000);
  return;
}


