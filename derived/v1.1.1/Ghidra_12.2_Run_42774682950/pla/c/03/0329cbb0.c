/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329cbb0; name: FUN_0329cbb0
 */


void FUN_0329cbb0(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  
  do {
    uVar4 = *(undefined8 *)(param_1 + (long)(param_2 + param_3 >> 1) * 8);
    iVar8 = param_2;
    iVar2 = param_3;
    do {
      puVar5 = (undefined8 *)(param_1 + (long)iVar8 * 8);
      while( true ) {
        uVar1 = (uint)((ulong)uVar4 >> 0x10);
        if (((uVar1 & 0xff) <= (uint)*(byte *)((long)puVar5 + 2)) &&
           ((uVar3 = (uint)uVar4, (uint)*(byte *)((long)puVar5 + 2) != (uVar1 & 0xff) ||
            (uVar3 >> 0x18 <= (uint)*(byte *)((long)puVar5 + 3))))) break;
        puVar5 = puVar5 + 1;
        iVar8 = iVar8 + 1;
      }
      puVar7 = (undefined8 *)(param_1 + (long)iVar2 * 8);
      while( true ) {
        if (((uint)*(byte *)((long)puVar7 + 2) <= (uVar1 & 0xff)) &&
           (((uint)*(byte *)((long)puVar7 + 2) != (uVar1 & 0xff) ||
            ((uint)*(byte *)((long)puVar7 + 3) <= uVar3 >> 0x18)))) break;
        puVar7 = puVar7 + -1;
        iVar2 = iVar2 + -1;
      }
      if (iVar8 <= iVar2) {
        if (iVar8 != iVar2) {
          uVar6 = *puVar7;
          *puVar7 = *puVar5;
          *puVar5 = uVar6;
        }
        iVar2 = iVar2 + -1;
        iVar8 = iVar8 + 1;
      }
    } while (iVar8 <= iVar2);
    if (param_2 < iVar2) {
      FUN_0329cbb0(param_1);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}


