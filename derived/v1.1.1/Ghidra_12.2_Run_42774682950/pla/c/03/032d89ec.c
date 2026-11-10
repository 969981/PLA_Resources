/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d89ec; name: thunk_FUN_032d89f0
 */


void thunk_FUN_032d89f0(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar2 = *param_1;
  if (0 < (int)uVar2) {
    uVar3 = uVar2 & 0xffffffff;
    puVar5 = param_1 + 1;
    puVar1 = param_1;
    while( true ) {
      puVar4 = puVar1 + 2;
      uVar3 = uVar3 - 1;
      if ((char)puVar5[uVar2 * 2] == '\x01') {
        uStack_58 = puVar1[1];
        uStack_50 = *puVar4;
        if (uStack_50 == 0) {
          uStack_48 = 0;
        }
        else {
          uStack_48 = FUN_032e3508();
          if ((uStack_48 & 1) != 0) {
            FUN_032e0c28(uStack_48 & 0xfffffffffffffffe);
          }
        }
        FUN_032e6310(&uStack_58,3,1);
        if ((uStack_48 & 1) != 0) {
          FUN_032e0c40(uStack_48 & 0xfffffffffffffffe);
        }
        puVar1[1] = 0;
        *puVar4 = (ulong)&DAT_0435aaf0;
        *(undefined1 *)(puVar5 + uVar2 * 2) = 0;
      }
      if (uVar3 == 0) break;
      uVar2 = *param_1;
      puVar5 = (ulong *)((long)puVar5 + 1);
      puVar1 = puVar4;
    }
  }
  return;
}


