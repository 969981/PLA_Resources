/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb9990; name: FUN_02eb9990
 */


undefined8 FUN_02eb9990(long *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  
  puVar11 = (ushort *)*param_1 + 1;
  uVar6 = *(ushort *)*param_1;
  *param_1 = (long)puVar11;
  uVar12 = (uint)uVar6;
  if (uVar12 != 0) {
    uVar13 = 0;
    while( true ) {
      uVar2 = *(undefined4 *)puVar11;
      *param_1 = (long)(puVar11 + 2);
      uVar6 = puVar11[2];
      *param_1 = (long)puVar11 + 5;
      uVar4 = *(undefined1 *)((long)puVar11 + 5);
      *param_1 = (long)(puVar11 + 3);
      bVar5 = (byte)puVar11[3];
      *param_1 = (long)puVar11 + 7;
      uVar1 = bVar5 & 0x7f;
      pbVar8 = (byte *)((long)puVar11 + 7);
      while ((char)bVar5 < '\0') {
        bVar5 = *pbVar8;
        uVar1 = bVar5 & 0x7f | uVar1 << 7;
        *param_1 = (long)(pbVar8 + 1);
        pbVar8 = pbVar8 + 1;
      }
      uVar3 = *(undefined4 *)pbVar8;
      *param_1 = (long)(pbVar8 + 4);
      bVar5 = pbVar8[4];
      *param_1 = (long)(pbVar8 + 5);
      uVar7 = *(ushort *)(pbVar8 + 5);
      *param_1 = (long)(pbVar8 + 7);
      uVar9 = FUN_02eb9aac(param_3,uVar2,(char)uVar6,uVar4,uVar1,uVar3,bVar5,pbVar8 + 7,uVar7);
      if ((int)uVar9 != 1) {
        return uVar9;
      }
      lVar10 = (ulong)uVar7 * 0xc;
      *param_1 = *param_1 + lVar10;
      uVar13 = uVar13 + 1;
      *param_2 = *param_2 - (int)lVar10;
      if (uVar13 == uVar12) break;
      puVar11 = (ushort *)*param_1;
    }
  }
  return 1;
}


