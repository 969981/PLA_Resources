/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282c55c; name: FUN_0282c55c
 */


undefined1  [16] FUN_0282c55c(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(uint *)(param_1 + 0x10) < param_2) {
    uVar1 = *(uint *)(param_1 + 0x100);
    uVar2 = (ulong)uVar1;
    if (param_2 < *(uint *)(param_1 + (ulong)(uVar1 - 1) * 0x30 + 0x10)) {
      if (uVar1 != 0) {
        puVar4 = (uint *)(param_1 + 0x10);
        lVar3 = -0x100000000;
        do {
          if (param_2 < *puVar4) {
            local_48 = *(undefined8 *)(puVar4 + 10);
            local_58 = *(undefined8 *)(puVar4 + 6);
            local_68 = *(undefined8 *)(puVar4 + 2);
            local_70 = *(undefined8 *)puVar4;
            local_60 = *(undefined8 *)(puVar4 + 4);
            local_50 = *(undefined8 *)(puVar4 + 8);
            param_1 = param_1 + (lVar3 >> 0x20) * 0x30;
            local_38 = *(undefined8 *)(param_1 + 0x18);
            local_30 = *(undefined8 *)(param_1 + 0x20);
            uStack_28 = *(undefined8 *)(param_1 + 0x28);
            local_20 = *(undefined8 *)(param_1 + 0x30);
            uStack_18 = *(undefined8 *)(param_1 + 0x38);
            local_40 = *(undefined8 *)(param_1 + 0x10);
            break;
          }
          lVar3 = lVar3 + 0x100000000;
          uVar2 = uVar2 - 1;
          puVar4 = puVar4 + 0xc;
        } while (uVar2 != 0);
      }
      auVar5 = FUN_0282c650(&local_40,&local_70);
    }
    else {
      auVar5 = *(undefined1 (*) [16])(param_1 + (ulong)(uVar1 - 1) * 0x30 + 0x20);
    }
  }
  else {
    auVar5 = *(undefined1 (*) [16])(param_1 + 0x20);
  }
  return auVar5;
}


