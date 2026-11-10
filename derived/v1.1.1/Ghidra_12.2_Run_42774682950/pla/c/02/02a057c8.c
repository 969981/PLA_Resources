/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a057c8; name: FUN_02a057c8
 */


void FUN_02a057c8(long param_1,long param_2,uint *param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_80 [16];
  byte local_70 [4];
  undefined4 local_6c;
  ulong local_68;
  undefined8 local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined6 uStack_50;
  undefined1 uStack_4a;
  undefined8 local_48;
  uint uStack_40;
  uint local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((*(byte *)(param_2 + 0x98) & 7) == 0) {
    if ((*(byte *)(param_2 + 0xa0) & 7) != 0) {
      FUN_02a3afc0(*(undefined8 *)(param_1 + 0x20),param_2,*param_3,2);
      pcVar5 = *(char **)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0xa8);
      cVar2 = *(char *)(param_2 + 0x7d);
      if ((*pcVar5 == '\0') || (pcVar5[2] != cVar2)) {
        if ((pcVar5[3] == '\0') || (pcVar5[5] != cVar2)) {
          if ((pcVar5[6] == '\0') || (pcVar5[8] != cVar2)) {
            if ((pcVar5[9] == '\0') || (pcVar5[0xb] != cVar2)) {
              if ((pcVar5[0xc] == '\0') || (pcVar5[0xe] != cVar2)) {
                if (pcVar5[0xf] == '\0') {
                  return;
                }
                if (pcVar5[0x11] != cVar2) {
                  return;
                }
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
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8a,uVar3,0x2a);
      return;
    }
    if ((*(byte *)(param_2 + 0xa8) & 7) != 0) {
      lVar7 = (&DAT_0428af30)[(ulong)*param_3 * 6];
      if (lVar7 == 0) {
        plVar4 = &DAT_0428af30;
      }
      else {
        plVar4 = &DAT_0428af30;
        if (*(char *)(lVar7 + 0x1e1) != '\0') {
          plVar4 = &DAT_0428af30 + (ulong)*param_3 * 6;
        }
      }
      piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
      if (((0x5e < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
          (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2f], uVar6 != 0)) &&
         (*(char *)((long)piVar1 + uVar6) != '\0')) {
        uStack_50 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_51 = 0;
        local_28 = 0;
        local_38 = 0;
        uStack_30 = 0;
        local_70[0] = *(byte *)(param_2 + 0x7d);
        local_6c = 3;
        uStack_4a = 1;
        local_68 = (ulong)local_70[0];
        local_48 = 0x102006601000000;
        _uStack_40 = CONCAT44(*param_3,(uint)local_70[0]);
        FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_80,local_70);
      }
    }
  }
  return;
}


