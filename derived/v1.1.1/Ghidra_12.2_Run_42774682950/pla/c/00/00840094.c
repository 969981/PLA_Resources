/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00840094; name: FUN_00840094
 */


void FUN_00840094(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  uVar1 = ((uint)param_3 & 0xffff) * 0x9a + 0x14;
  uVar8 = (ulong)uVar1;
  *(uint *)(param_2 + 0x20) = uVar1;
  uVar3 = FUN_007e336c();
  lVar4 = FUN_0081a750(uVar8,uVar3);
  if (lVar4 != 0) {
    if (uVar8 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        *(undefined4 *)(lVar4 + lVar6) = 0;
        lVar6 = lVar6 + 4;
      } while (uVar8 - (uVar8 & 2) != lVar6);
    }
    if ((uVar1 & 2) != 0) {
      lVar7 = (param_3 & 1) * -2;
      puVar5 = (undefined1 *)(lVar4 + lVar6);
      do {
        bVar2 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (bVar2);
    }
  }
  *(long *)(param_2 + 0x18) = lVar4;
  *(undefined1 *)(param_2 + 0x10) = 0;
  FUN_007ecf14(param_2 + 8);
  memset(*(void **)(param_2 + 0x18),0,(ulong)*(uint *)(param_2 + 0x20));
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x5e8) = 0xffff;
  *(undefined2 *)(param_2 + 0x5ec) = 0;
  memset((void *)(param_2 + 0x5f0),0,4);
  *(undefined1 *)(param_2 + 0x5f4) = 0;
  local_40[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


