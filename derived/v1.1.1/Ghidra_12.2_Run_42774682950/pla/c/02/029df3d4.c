/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029df3d4; name: FUN_029df3d4
 */


void FUN_029df3d4(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_a0 [16];
  byte local_90 [4];
  undefined4 local_8c;
  ulong local_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined6 uStack_70;
  undefined1 uStack_6a;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_2 + 10) == '\t') {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x5a);
    *(undefined1 *)((long)param_4 + 0x5c) = 0;
    if (*(byte *)((long)param_4 + 0x5a) != 0) {
      lVar3 = *param_4;
      *(undefined1 *)((long)param_4 + 0x5c) = 1;
      if (lVar3 != 0) {
        bVar2 = 1;
        do {
          if ((((*(byte *)(lVar3 + 0x98) & 7) == 0) && ((*(byte *)(lVar3 + 0xa0) & 7) == 0)) &&
             ((*(byte *)(lVar3 + 0xa8) & 7) != 0)) {
            uVar4 = 0;
            do {
              if (param_4[uVar4] == lVar3) {
                if (*(char *)((long)param_4 + (uVar4 & 0xffffffff) + 0x48) == '\x01') {
                  uStack_70 = 0;
                  local_80 = 0;
                  uStack_78 = 0;
                  local_71 = 0;
                  local_50 = 0;
                  uStack_48 = 0;
                  local_60 = 0;
                  uStack_58 = 0;
                  local_90[0] = *(byte *)(lVar3 + 0x7d);
                  local_8c = 3;
                  local_88 = (ulong)local_90[0];
                  uStack_6a = 1;
                  local_68 = 0;
                  FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_a0,
                               local_90);
                  bVar2 = *(byte *)((long)param_4 + 0x5c);
                  uVar1 = (ulong)*(byte *)((long)param_4 + 0x5a);
                }
                break;
              }
              uVar4 = uVar4 + 1;
            } while (uVar1 != uVar4);
          }
          if ((uint)uVar1 <= (uint)bVar2) {
            return;
          }
          uVar4 = (ulong)bVar2;
          bVar2 = bVar2 + 1;
          *(byte *)((long)param_4 + 0x5c) = bVar2;
          lVar3 = param_4[uVar4];
        } while (lVar3 != 0);
      }
    }
  }
  return;
}


