/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00848914; name: FUN_00848914
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00848914(undefined8 param_1,long param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (((param_3 == (undefined1 *)0x0) || (param_4 == (int *)0x0)) || (param_5 < 0x10)) {
    local_30[0] = 0x10407;
  }
  else {
    puVar4 = (ulong *)(param_3 + 1);
    *param_3 = *(undefined1 *)(param_2 + 8);
    bVar1 = *(byte *)(param_2 + 8);
    if ((bVar1 & 1) != 0) {
      param_3[1] = *(undefined1 *)(param_2 + 9);
      bVar1 = *(byte *)(param_2 + 8);
      puVar4 = (ulong *)(param_3 + 2);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      *(ushort *)puVar4 = *(ushort *)(param_2 + 10) >> 8 | *(ushort *)(param_2 + 10) << 8;
      bVar1 = *(byte *)(param_2 + 8);
      puVar4 = (ulong *)((long)puVar4 + 2);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      uVar2 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
      *(uint *)puVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
      bVar1 = *(byte *)(param_2 + 8);
      puVar4 = (ulong *)((long)puVar4 + 4);
    }
    puVar5 = puVar4;
    if ((bVar1 >> 3 & 1) != 0) {
      uVar3 = (*(ulong *)(param_2 + 0x10) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_2 + 0x10) & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar5 = puVar4 + 1;
      *puVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
    }
    *param_4 = (int)puVar5 - (int)param_3;
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


