/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ec758; name: FUN_029ec758
 */


void FUN_029ec758(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  bVar1 = *(byte *)(*param_3 + 0x7d);
  uVar5 = (ulong)bVar1;
  pcVar3 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  if ((*pcVar3 == '\0') || (pcVar3[2] != bVar1)) {
    if ((pcVar3[3] == '\0') || (pcVar3[5] != bVar1)) {
      if ((pcVar3[6] == '\0') || (pcVar3[8] != bVar1)) {
        if ((pcVar3[9] == '\0') || (pcVar3[0xb] != bVar1)) {
          if ((pcVar3[0xc] == '\0') || (pcVar3[0xe] != bVar1)) {
            if ((pcVar3[0xf] == '\0') || (pcVar3[0x11] != bVar1)) {
              uVar6 = 6;
              cVar2 = (char)param_3[1];
            }
            else {
              uVar6 = 5;
              cVar2 = (char)param_3[1];
            }
          }
          else {
            uVar6 = 4;
            cVar2 = (char)param_3[1];
          }
        }
        else {
          uVar6 = 3;
          cVar2 = (char)param_3[1];
        }
      }
      else {
        uVar6 = 2;
        cVar2 = (char)param_3[1];
      }
    }
    else {
      uVar6 = 1;
      cVar2 = (char)param_3[1];
    }
  }
  else {
    uVar6 = 0;
    cVar2 = (char)param_3[1];
  }
  if (cVar2 != '\0') {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x101,uVar5,0xffff0000);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  *(undefined2 *)
   (*(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) + uVar5 * 8 + 0x120) + 0x496)
       = 0;
  FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x39,uVar5);
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x91,uVar6);
  return;
}


