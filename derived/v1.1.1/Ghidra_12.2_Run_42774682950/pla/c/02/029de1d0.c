/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029de1d0; name: FUN_029de1d0
 */


void FUN_029de1d0(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  uint uVar8;
  long local_78;
  int local_70;
  undefined1 local_6c;
  byte local_6b;
  undefined2 *local_68;
  undefined2 local_60;
  undefined2 local_58;
  undefined2 local_56;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_28 [4];
  char local_24 [4];
  
  lVar5 = *param_3;
  if (*(short *)(lVar5 + 0x74) != 0) {
    cVar1 = *(char *)(lVar5 + 0x7d);
    pcVar7 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
    if ((((((*pcVar7 != '\0') && (pcVar7[2] == cVar1)) ||
          ((pcVar7[3] != '\0' && (pcVar7[5] == cVar1)))) ||
         ((pcVar7[6] != '\0' && (pcVar7[8] == cVar1)))) ||
        ((pcVar7[9] != '\0' && (pcVar7[0xb] == cVar1)))) ||
       (((pcVar7[0xc] != '\0' && (pcVar7[0xe] == cVar1)) ||
        ((pcVar7[0xf] != '\0' && (pcVar7[0x11] == cVar1)))))) {
      iVar3 = FUN_02970b08(*(undefined8 *)(param_1 + 0x38),lVar5,*(undefined4 *)param_3[1],
                           ((undefined4 *)param_3[1])[8],(int)param_3[2],local_24);
      if ((iVar3 != 0) &&
         ((local_24[0] != '\0' ||
          (uVar4 = FUN_029719b8(*(undefined8 *)
                                 (*(long *)(*(long *)(param_1 + 0x60) + 0x17a0) + 0x38),*param_3,
                                iVar3,0), (uVar4 & 1) != 0)))) {
        lVar5 = *param_3;
        local_38 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_50 = 0;
        local_58 = 0x7f;
        local_6b = *(byte *)(lVar5 + 0x7d);
        local_56 = 0x82;
        local_6c = 4;
        local_54 = (uint)local_6b;
        local_68 = &local_58;
        local_60 = 0x101;
        local_78 = lVar5;
        local_70 = iVar3;
        FUN_029f6330(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x17c0),local_28,&local_78);
        if (local_28[0] != '\0') {
          lVar6 = *(long *)(param_1 + 0x20);
          bVar2 = *(byte *)(lVar5 + 0x7d);
          lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 8) +
                            (ulong)bVar2 * 8 + 0x120);
          uVar8 = *(int *)(lVar5 + 0x3b4) + iVar3;
          if (0xfffe < uVar8) {
            uVar8 = 0xffff;
          }
          *(uint *)(lVar5 + 0x3b4) = uVar8;
          FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x35,(ulong)bVar2,8,iVar3);
        }
      }
    }
  }
  return;
}


