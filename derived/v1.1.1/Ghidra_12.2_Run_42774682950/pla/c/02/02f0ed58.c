/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0ed58; name: FUN_02f0ed58
 */


undefined8 * FUN_02f0ed58(long *param_1,undefined8 *param_2,ulong param_3,int param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  plVar2 = param_1 + 2;
  if (param_4 != 1) {
    plVar2 = param_1;
  }
  puVar6 = (undefined8 *)(*DAT_0442d138)(0,0x50);
  if (puVar6 == (undefined8 *)0x0) goto LAB_02f0eeb0;
  puVar6[6] = 0;
  plVar8 = puVar6 + 5;
  *plVar8 = 0;
  *puVar6 = 0x20000000;
  *(undefined4 *)((long)puVar6 + 0x3c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  *(byte *)(puVar6 + 8) = *(byte *)(puVar6 + 8) & 0xfc;
  iVar5 = FUN_02f0e97c(puVar6,param_2,*(undefined4 *)(DAT_0440a128 + 0x78));
  if (iVar5 == 2) {
    if (*plVar8 != 0) {
      *(undefined4 *)(puVar6 + 6) = 0;
      (*DAT_0442d150)(0);
      puVar6[5] = 0;
      *(undefined4 *)((long)puVar6 + 0x34) = 0;
    }
  }
  else {
    uVar3 = *(uint *)(plVar2 + 1);
    uVar4 = *(uint *)((long)plVar2 + 0xc);
    if (uVar3 < uVar4) {
joined_r0x02f0ee78:
      if (uVar3 < uVar4) {
        puVar1 = (undefined8 *)(*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 8);
        *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) + 1;
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = puVar6;
          if ((param_3 & 1) == 0) {
            return puVar6;
          }
          *(undefined4 *)((long)puVar6 + 0x3c) = 1;
          return puVar6;
        }
      }
    }
    else {
      iVar5 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar5 = 1;
      }
      uVar4 = iVar5 + uVar4;
      lVar7 = (*DAT_0442d148)(0,*plVar2,(ulong)uVar4 << 3);
      if (lVar7 != 0) {
        *plVar2 = lVar7;
        *(uint *)((long)plVar2 + 0xc) = uVar4;
        goto joined_r0x02f0ee78;
      }
    }
    if (*plVar8 != 0) {
      *(undefined4 *)(puVar6 + 6) = 0;
      (*DAT_0442d150)(0);
      puVar6[5] = 0;
      *(undefined4 *)((long)puVar6 + 0x34) = 0;
    }
  }
  (*DAT_0442d150)(0,puVar6);
LAB_02f0eeb0:
  (*(code *)**(undefined8 **)*param_2)
            (*(undefined4 *)((long)param_2 + 0x14),(undefined8 *)*param_2,param_2[1],1);
  return (undefined8 *)0x0;
}


