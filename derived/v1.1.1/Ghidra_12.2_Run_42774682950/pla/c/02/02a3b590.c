/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3b590; name: FUN_02a3b590
 */


void FUN_02a3b590(long param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *(char *)(param_2 + 0x7d);
  pcVar3 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  if ((*pcVar3 == '\0') || (pcVar3[2] != cVar2)) {
    if ((pcVar3[3] == '\0') || (pcVar3[5] != cVar2)) {
      if ((pcVar3[6] == '\0') || (pcVar3[8] != cVar2)) {
        if ((pcVar3[9] == '\0') || (pcVar3[0xb] != cVar2)) {
          if ((pcVar3[0xc] == '\0') || (pcVar3[0xe] != cVar2)) {
            if ((pcVar3[0xf] == '\0') || (pcVar3[0x11] != cVar2)) goto LAB_02a3b668;
            uVar1 = 5;
          }
          else {
            uVar1 = 4;
          }
        }
        else {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x8a,uVar1,0x2f);
  cVar2 = *(char *)(param_2 + 0x7d);
LAB_02a3b668:
  FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,0x75,cVar2,0xffff0000);
  return;
}


