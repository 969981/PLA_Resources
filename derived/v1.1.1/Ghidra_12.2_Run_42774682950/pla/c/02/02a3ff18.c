/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3ff18; name: FUN_02a3ff18
 */


void FUN_02a3ff18(long param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 auStack_90 [64];
  uint local_44;
  
  uVar5 = *(ushort *)(param_2 + 2);
  uVar9 = (uint)uVar5;
  if (uVar9 == 0xffff) {
    uVar9 = (uint)**(ushort **)(param_1 + 8);
  }
  *(short *)(param_2 + 4) = (short)uVar9;
  if (param_2[0xe] == '\0') {
    if (uVar9 != 0xffff) {
      uVar2 = *(ushort *)(param_3 + 0xc);
      if (uVar2 != 0xffff) {
        puVar8 = *(uint **)(param_1 + 8);
        uVar1 = puVar8[1];
        puVar8[1] = uVar9;
        uVar7 = uVar9;
        if (uVar9 < uVar2) goto LAB_02a3ffbc;
        while (uVar7 == *puVar8) {
LAB_02a3ffbc:
          do {
            local_44 = 0xffffffff;
            sVar3 = FUN_02a3d074(puVar8,auStack_90,0x10,&local_44);
            if ((((ushort)(sVar3 - 0x6aU) < 0x36) && (uVar9 <= local_44)) && (local_44 < uVar2)) {
              uVar6 = 1;
              goto LAB_02a4000c;
            }
            uVar7 = puVar8[1];
          } while (uVar7 < uVar2);
        }
        uVar6 = 0;
LAB_02a4000c:
        puVar8[1] = uVar1;
        uVar5 = *(ushort *)(param_2 + 2);
        goto LAB_02a40014;
      }
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
LAB_02a40014:
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  if (uVar5 == 0xffff) {
    FUN_02a3e6b8(uVar4,0x9b,param_2[0xc],0,*(undefined2 *)(param_2 + 8),param_2[0xd],uVar6);
  }
  else {
    FUN_02a3fae8(uVar4,uVar5,0x9b,param_2[0xc],0);
  }
  *param_2 = 1;
  return;
}


