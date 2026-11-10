/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029eca18; name: FUN_029eca18
 */


void FUN_029eca18(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  long local_80;
  long lStack_78;
  uint local_70;
  long local_68;
  long lStack_60;
  undefined1 local_58;
  
  lVar4 = param_3[3];
  if (*(char *)(lVar4 + 9) == '\0') {
    if (*(int *)(lVar4 + 4) == 7) {
      *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(*param_3 + 0x34);
    }
  }
  else {
    FUN_02a3aaac(*(undefined8 *)(param_1 + 0x20),param_3[2],(char)param_3[4],*param_3 + 0x34,
                 *param_3,*(undefined1 *)((long)param_3 + 0x21));
    bVar3 = *(byte *)(param_3 + 4);
    if (bVar3 != 0) {
      uVar5 = 0;
      do {
        if (7 < *(int *)(*param_3 + uVar5 * 4 + 0x34)) {
          lVar6 = *(long *)(param_1 + 0x20);
          lVar4 = *(long *)(param_1 + 0x10);
          uVar1 = *(undefined1 *)(*(long *)(*param_3 + uVar5 * 8) + 0x7d);
          FUN_029cddec(*(undefined8 *)(param_1 + 8),lVar4);
          uVar2 = FUN_02957720(*(undefined8 *)(lVar4 + 0x188),8,uVar1,0,0);
          if (-1 < (int)uVar2) {
            uVar2 = uVar2 & 0xff;
            if (uVar2 < 10) {
              *(undefined1 *)
               (*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 0x188) + (ulong)uVar2 + 0x10)
                   = 1;
            }
            FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x6d,(ulong)uVar2,8);
          }
          bVar3 = *(byte *)(param_3 + 4);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < bVar3);
    }
  }
  local_68 = *param_3;
  lStack_60 = local_68 + 0x48;
  lStack_78 = param_3[1];
  local_80 = param_3[2];
  local_58 = *(undefined1 *)((long)param_3 + 0x21);
  local_70 = (uint)*(byte *)(param_3 + 4);
  FUN_029d9c28(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x560),auStack_88,&local_80);
  return;
}


