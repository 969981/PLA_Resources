/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084375c; name: FUN_0084375c
 */


void FUN_0084375c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar2 = FUN_007e336c();
  lVar3 = FUN_0081a750(0x9750,uVar2);
  if (lVar3 == 0) {
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  else {
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      lVar4 = lVar4 + 0x18;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
    } while (lVar4 != 0x9750);
    *(long *)(param_2 + 0x20) = lVar3;
    uVar2 = FUN_007e336c();
    lVar3 = FUN_0081a750(4000,uVar2);
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        puVar1 = (undefined8 *)(lVar3 + lVar4);
        lVar4 = lVar4 + 0x14;
        *(undefined4 *)(puVar1 + 2) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      } while (lVar4 != 4000);
      *(long *)(param_2 + 0x28) = lVar3;
      local_30[0] = 0;
      goto LAB_0084380c;
    }
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  local_30[0] = 0x10401;
LAB_0084380c:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


