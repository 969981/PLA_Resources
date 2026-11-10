/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3b684; name: FUN_02a3b684
 */


void FUN_02a3b684(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  uVar5 = (uint)*(ulong *)(param_2 + 0xd8);
  uVar1 = uVar5 & 7;
  uVar6 = 0;
  if (uVar1 == 2) {
    uVar6 = (uint)(*(ulong *)(param_2 + 0xd8) >> 0xe);
  }
  uVar2 = uVar5 >> 8 & 0x3f;
  if (uVar1 != 3) {
    uVar2 = uVar6;
  }
  uVar6 = uVar5 >> 0xe & 0x3f;
  if (uVar1 != 4) {
    uVar6 = uVar2;
  }
  pcVar7 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  cVar4 = *(char *)(param_2 + 0x7d);
  if ((*pcVar7 == '\0') || (pcVar7[2] != cVar4)) {
    if ((pcVar7[3] == '\0') || (pcVar7[5] != cVar4)) {
      if ((pcVar7[6] == '\0') || (pcVar7[8] != cVar4)) {
        if ((pcVar7[9] == '\0') || (pcVar7[0xb] != cVar4)) {
          if ((pcVar7[0xc] == '\0') || (pcVar7[0xe] != cVar4)) {
            if ((pcVar7[0xf] == '\0') || (pcVar7[0x11] != cVar4)) goto LAB_02a3b78c;
            uVar3 = 5;
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
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x8a,uVar3,0x30);
  cVar4 = *(char *)(param_2 + 0x7d);
LAB_02a3b78c:
  FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,0x70,cVar4,uVar6 & 0xffff,0xffff0000);
  return;
}


