/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d9c28; name: FUN_029d9c28
 */


void FUN_029d9c28(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(int *)(param_3 + 2) != 0) {
    uVar5 = 0;
    do {
      iVar2 = *(int *)(param_3[4] + uVar5 * 4);
      if (iVar2 != 0) {
        FUN_029d9d3c(param_1,*param_3,*(undefined8 *)(param_3[3] + uVar5 * 8),iVar2,
                     *(undefined1 *)(param_3 + 5));
        lVar1 = *(long *)(param_1 + 0x10);
        lVar6 = *(long *)(param_1 + 0x20);
        uVar3 = *(undefined1 *)(*(long *)(param_3[3] + uVar5 * 8) + 0x7d);
        FUN_029cddec(*(undefined8 *)(param_1 + 8),lVar1);
        uVar4 = FUN_02957720(*(undefined8 *)(lVar1 + 0x188),10,uVar3,0,0);
        if (-1 < (int)uVar4) {
          uVar4 = uVar4 & 0xff;
          if (uVar4 < 10) {
            *(undefined1 *)
             (*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 0x188) + (ulong)uVar4 + 0x10) =
                 1;
          }
          FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x6d,(ulong)uVar4,10);
        }
      }
      FUN_0298bef0(*(undefined8 *)(param_1 + 0x38),param_3[1],*param_3,
                   *(undefined8 *)(param_3[3] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_3 + 2));
  }
  return;
}


