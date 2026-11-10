/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00829d3c; name: FUN_00829d3c
 */


void FUN_00829d3c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar8 = local_60;
  uVar4 = FUN_008259b0();
  if ((uVar4 & 1) == 0) {
    local_50[0] = 0;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    if (*(void **)(param_3 + 0x20) != (void *)0x0) {
      memcpy((void *)(param_2 + 0x88),*(void **)(param_3 + 0x20),0x20);
    }
    plVar5 = *(long **)(param_2 + 0x18);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x10))(local_60,plVar5,param_3);
      FUN_007ee660(local_50,local_60);
      if (local_50[0] != 0) goto LAB_0082a048;
      lVar6 = (**(code **)(**(long **)(param_2 + 0x18) + 0x130))();
      if (lVar6 != 0) {
        puVar7 = (undefined2 *)(**(code **)(**(long **)(param_2 + 0x18) + 0x130))();
        *(undefined2 *)(param_2 + 0x130) = *puVar7;
        FUN_007e346c(param_2 + 0x138,puVar7 + 4);
        uVar9 = *(undefined8 *)(puVar7 + 0x14);
        uVar2 = *(undefined8 *)(puVar7 + 0x18);
        uVar11 = *(undefined8 *)(puVar7 + 0x1c);
        *(undefined2 *)(param_2 + 0x170) = puVar7[0x20];
        *(undefined8 *)(param_2 + 0x158) = uVar9;
        *(undefined8 *)(param_2 + 0x160) = uVar2;
        *(undefined8 *)(param_2 + 0x168) = uVar11;
      }
    }
    if (4 < *(byte *)(param_3 + 0x288)) {
      local_60[0] = 0x10407;
LAB_00829e5c:
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
      goto LAB_0082a04c;
    }
    FUN_007e3130(param_2 + 0x45c,param_3 + 8);
    if (*(char *)(param_3 + 0x288) == '\0') {
      FUN_007e8434(param_2 + 0x1f8);
      memset((void *)(param_2 + 0x280),0,0x10);
      if (*(byte *)(param_3 + 0x288) < 2) goto LAB_00829f30;
LAB_00829eac:
      FUN_007e8410(param_2 + 0x290,param_3 + 0xc0);
      uVar9 = *(undefined8 *)(param_3 + 0x148);
      *(undefined8 *)(param_2 + 800) = *(undefined8 *)(param_3 + 0x150);
      *(undefined8 *)(param_2 + 0x318) = uVar9;
      if (*(byte *)(param_3 + 0x288) < 3) goto LAB_00829ed0;
LAB_00829f54:
      FUN_007e8410(param_2 + 0x328,param_3 + 0x158);
      uVar9 = *(undefined8 *)(param_3 + 0x1e0);
      *(undefined8 *)(param_2 + 0x3b8) = *(undefined8 *)(param_3 + 0x1e8);
      *(undefined8 *)(param_2 + 0x3b0) = uVar9;
      if (3 < *(byte *)(param_3 + 0x288)) goto LAB_00829f78;
LAB_00829ef4:
      FUN_007e8434();
      memset((void *)(param_2 + 0x448),0,0x10);
    }
    else {
      FUN_007e8410(param_2 + 0x1f8,param_3 + 0x28);
      uVar9 = *(undefined8 *)(param_3 + 0xb0);
      *(undefined8 *)(param_2 + 0x288) = *(undefined8 *)(param_3 + 0xb8);
      *(undefined8 *)(param_2 + 0x280) = uVar9;
      if (1 < *(byte *)(param_3 + 0x288)) goto LAB_00829eac;
LAB_00829f30:
      FUN_007e8434(param_2 + 0x290);
      memset((void *)(param_2 + 0x318),0,0x10);
      if (2 < *(byte *)(param_3 + 0x288)) goto LAB_00829f54;
LAB_00829ed0:
      FUN_007e8434();
      memset((void *)(param_2 + 0x3b0),0,0x10);
      if (*(byte *)(param_3 + 0x288) < 4) goto LAB_00829ef4;
LAB_00829f78:
      FUN_007e8410(param_2 + 0x3c0,param_3 + 0x1f0);
      uVar9 = *(undefined8 *)(param_3 + 0x278);
      *(undefined8 *)(param_2 + 0x450) = *(undefined8 *)(param_3 + 0x280);
      *(undefined8 *)(param_2 + 0x448) = uVar9;
    }
    *(undefined1 *)(param_2 + 0x458) = *(undefined1 *)(param_3 + 0x288);
    *(undefined1 *)(param_2 + 0x459) = 1;
    puVar1 = (undefined8 *)(param_2 + 0xd0);
    if (*(undefined8 **)(param_2 + 0xd8) != puVar1) {
      puVar10 = *(undefined8 **)(param_2 + 0xd8);
      do {
        puVar12 = (undefined8 *)puVar10[1];
        *puVar10 = 0;
        puVar10[1] = 0;
        FUN_007e8fc4(param_2 + 0xe8,param_2 + 0xe8,(long)*(int *)(param_2 + 0xfc) + (long)puVar10);
        puVar10 = puVar12;
      } while (puVar12 != puVar1);
    }
    FUN_007e8f94(puVar1);
    puVar3 = PTR_DAT_043773c0;
    FUN_00854740(local_60,*(undefined8 *)PTR_DAT_043773c0,0);
    FUN_007ee660(local_50,local_60);
    if (local_50[0] == 0) {
      (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(*(long **)(param_2 + 0x28),1);
      FUN_0083f674(local_60,*(undefined8 *)(param_2 + 0x28));
      FUN_007ee660(local_50,local_60);
      if (local_50[0] == 0) {
        FUN_007e5e70(*(undefined8 *)(param_2 + 0x28),0);
        lVar6 = *(long *)puVar3;
        *(undefined1 *)(lVar6 + 0xc0) = 1;
        FUN_00854de8(local_60,lVar6,*(undefined4 *)(param_3 + 0x290));
        *(undefined4 *)(*(long *)(param_2 + 0x10) + 0xd8) = *(undefined4 *)(param_3 + 0x28c);
        *(undefined1 *)(param_2 + 0x470) = 1;
        local_60[0] = 0;
        goto LAB_00829e5c;
      }
    }
  }
  else {
    local_60[0] = 0;
    local_50[0] = 0x10408;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  }
LAB_0082a048:
  piVar8 = local_50;
LAB_0082a04c:
  FUN_007ee578(param_1,piVar8);
  return;
}


