/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d2c8; name: FUN_0020d2c8
 */


undefined8 FUN_0020d2c8(long *param_1,ulong *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  
  lVar4 = *param_1;
  if ((ulong)(*(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 0x20)) < *param_2) {
    uVar3 = 0xfffffdf6;
  }
  else {
    puVar5 = (ulong *)param_2[2];
    *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + -9;
    FUN_0020c7ac();
    if (*puVar5 != 0) {
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      lVar6 = 0;
      uVar7 = 0;
      do {
        puVar2 = (undefined8 *)(puVar5[1] + lVar6);
        FUN_002056f0(uVar3,*(undefined2 *)(puVar2 + 1));
        lVar1 = *(long *)(lVar4 + 0x20) + 2;
        *(long *)(lVar4 + 0x20) = lVar1;
        uVar3 = FUN_00205b90(lVar1,*puVar2,puVar2[1]);
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar7 < *puVar5);
    }
    uVar3 = 0;
  }
  return uVar3;
}


