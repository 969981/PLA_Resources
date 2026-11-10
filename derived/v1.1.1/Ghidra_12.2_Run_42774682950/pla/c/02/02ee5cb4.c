/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee5cb4; name: FUN_02ee5cb4
 */


/* WARNING: Removing unreachable block (ram,0x02ee5dec) */
/* WARNING: Removing unreachable block (ram,0x02ee5e70) */
/* WARNING: Removing unreachable block (ram,0x02ee5e0c) */
/* WARNING: Removing unreachable block (ram,0x02ee5e1c) */
/* WARNING: Removing unreachable block (ram,0x02ee5e34) */
/* WARNING: Removing unreachable block (ram,0x02ee5e3c) */

undefined8 FUN_02ee5cb4(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar4 = (*DAT_0442d138)(0,(ulong)uVar1 * 0x28);
  uVar5 = 0;
  if (lVar4 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar4)) {
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          lVar7 = uVar8 * 0x28;
          puVar2 = (undefined8 *)(lVar4 + lVar7);
          *(undefined4 *)(puVar2 + 1) = 0;
          *(undefined1 *)((long)puVar2 + 0xc) = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          *puVar2 = &PTR_LAB_042aaab8;
          lVar6 = *param_1 + lVar7;
          puVar2[4] = *(undefined8 *)(lVar6 + 0x20);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar6 + 8);
          *(undefined1 *)((long)puVar2 + 0xc) = *(undefined1 *)(lVar6 + 0xc);
          puVar2[2] = *(undefined8 *)(lVar6 + 0x10);
          *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(lVar6 + 0x18);
          *(undefined4 *)((long)puVar2 + 0x1c) = *(undefined4 *)(lVar6 + 0x1c);
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (*(code *)**(undefined8 **)(*param_1 + lVar7))();
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar3);
        lVar6 = *param_1;
      }
      (*DAT_0442d150)(0,lVar6);
    }
    uVar5 = 1;
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar5;
}


