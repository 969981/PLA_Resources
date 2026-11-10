/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028dd48; name: FUN_0028dd48
 */


void FUN_0028dd48(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  bVar2 = *(byte *)(param_1 + 0x9c);
  if ((ulong)bVar2 != 0) {
    lVar6 = 0;
    lVar7 = 0;
    lVar8 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x40);
      lVar1 = *(long *)(param_1 + 0x38) + lVar6;
      FUN_0087cb74(lVar1);
      FUN_0087cb9c(lVar1,param_2,lVar4 + lVar7);
      if (*(long *)(param_1 + 0x48) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(*(long *)(param_1 + 0x48) + lVar8) + 2;
      }
      FUN_0028eda0(lVar1,lVar4);
      lVar7 = lVar7 + 0x20;
      lVar8 = lVar8 + 0x10;
      lVar6 = lVar6 + 0x78;
    } while ((ulong)bVar2 * 0x20 != lVar7);
  }
  uVar3 = *(ushort *)(param_1 + 0x9e);
  if ((ulong)uVar3 != 0) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x50);
      uVar5 = (ulong)*(byte *)(lVar8 + lVar7 + 0x10);
      if ((0x1b < uVar5) && (*(long *)(lVar8 + lVar7) == 0)) {
        *(undefined8 *)(lVar8 + lVar7) = *(undefined8 *)(&DAT_0414d318 + uVar5 * 8);
      }
      lVar7 = lVar7 + 0x20;
    } while ((ulong)uVar3 * 0x20 != lVar7);
  }
  return;
}


