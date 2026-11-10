/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e43e0; name: FUN_005e43e0
 */


void FUN_005e43e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong *param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  size_t __n;
  void *__dest;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined1 (*pauVar10) [12];
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [12];
  undefined8 *local_68;
  
  puVar3 = (undefined8 *)FUN_0053ee00(PTR_PTR_04375108,param_7);
  if (((*(int *)(puVar3 + 1) != 2) || (puVar8 = (undefined8 *)*puVar3, puVar8 == (undefined8 *)0x0))
     && (puVar8 = (undefined8 *)FUN_0053ee00(PTR_PTR_04375118,param_7), puVar8 != (undefined8 *)0x0)
     ) {
    *(undefined4 *)(puVar3 + 1) = 2;
    *puVar3 = puVar8;
  }
  pauVar10 = (undefined1 (*) [12])puVar8[4];
  if ((pauVar10 == (undefined1 (*) [12])0x0) &&
     (pauVar10 = (undefined1 (*) [12])FUN_0053ee00(PTR_DAT_04375120,param_7),
     pauVar10 != (undefined1 (*) [12])0x0)) {
    puVar8[4] = pauVar10;
  }
  auVar13 = FUN_002eec80(1);
  *pauVar10 = auVar13;
  *puVar8 = param_2;
  puVar8[1] = param_3;
  puVar8[2] = param_4;
  puVar8[3] = param_5;
  puVar2 = PTR_DAT_04375128;
  if ((param_6 != (ulong *)0x0) && (uVar5 = *param_6, 1 < uVar5)) {
    lVar11 = 0;
    uVar12 = 0;
    do {
      puVar9 = param_6 + 1;
      if ((uVar5 & 1) != 0) {
        puVar9 = (ulong *)param_6[1];
      }
      local_68 = (undefined8 *)FUN_0053ee00(puVar2,param_7);
      puVar6 = (ulong *)puVar8[5];
      if ((puVar6 == (ulong *)0x0) || (puVar6[1] == puVar6[2])) {
        uVar5 = FUN_0053f0c0(puVar8 + 5,&local_68,6,param_7);
        if ((uVar5 & 1) != 0) goto LAB_005e4534;
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 **)((*puVar6 & 0xfffffffffffffff8) + puVar6[1] * 8) = local_68;
        puVar6[1] = puVar6[1] + 1;
LAB_005e4534:
        puVar7 = local_68;
      }
      __n = strlen(*(char **)((long)puVar9 + lVar11));
      uVar5 = __n + 0xf & 0xfffffffffffffff0;
      __dest = *(void **)(param_7 + 8);
      if ((ulong)(*(long *)(param_7 + 0x10) - (long)__dest) < uVar5) {
        __dest = (void *)FUN_0053f330(param_7);
      }
      else {
        *(ulong *)(param_7 + 8) = (long)__dest + uVar5;
      }
      puVar1 = (undefined8 *)((long)puVar9 + lVar11);
      memcpy(__dest,(void *)*puVar1,__n);
      puVar7[1] = __dest;
      puVar7[2] = __n;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x10;
      *puVar7 = puVar1[1];
      uVar5 = *param_6;
    } while (uVar12 < uVar5 >> 1);
  }
  uVar4 = FUN_00542580(puVar3,PTR_PTR_04375108,param_7,&local_68);
  FUN_002f2f40(param_1,uVar4,local_68);
  return;
}


