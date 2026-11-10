/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d952c; name: FUN_028d952c
 */


void FUN_028d952c(long param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  ushort uVar11;
  ulong uVar12;
  
  puVar7 = PTR_DAT_0437a120;
  puVar6 = PTR_DAT_04379570;
  if (*(long *)(param_3 + 0x68) == 0) {
    piVar9 = *(int **)(param_3 + 0x30);
    if (piVar9 != (int *)0x0) goto LAB_028d9588;
    lVar8 = *(long *)(param_3 + 0x40);
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x1e1) == '\0')) {
      lVar8 = *(long *)(param_3 + 8);
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x278);
    }
  }
  else {
    lVar8 = *(long *)(*(long *)(param_3 + 0x68) + 8);
  }
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x1e1) == '\0')) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)((long)*(uint **)(lVar8 + 0x250) + (ulong)**(uint **)(lVar8 + 0x250));
  }
LAB_028d9588:
  *(undefined2 *)(param_1 + 10) = 0xffff;
  uVar2 = *(undefined8 *)puVar7;
  uVar4 = *(undefined8 *)(puVar7 + 8);
  uVar3 = *(undefined8 *)puVar6;
  uVar5 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  if (((piVar9 != (int *)0x0) && (6 < *(ushort *)((long)piVar9 - (long)*piVar9))) &&
     (uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar12 != 0)) {
    puVar1 = (uint *)((long)piVar9 + uVar12);
    piVar9 = (int *)((long)puVar1 + (ulong)*puVar1);
    if ((6 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
       (uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar12 != 0)) {
      puVar1 = (uint *)((long)piVar9 + uVar12);
      piVar9 = (int *)((long)puVar1 + (ulong)*puVar1);
      if (*(ushort *)((long)piVar9 - (long)*piVar9) < 5) {
        uVar11 = 0;
      }
      else {
        uVar11 = ((ushort *)((long)piVar9 - (long)*piVar9))[2];
        if ((ulong)uVar11 != 0) {
          uVar11 = (ushort)*(undefined4 *)((long)piVar9 + (ulong)uVar11);
        }
      }
      *(ushort *)(param_1 + 10) = uVar11;
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
         (uVar12 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar12 == 0)) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)((long)piVar9 + uVar12);
      }
      uVar2 = *puVar10;
      *(ulong *)(param_1 + 0x18) = (ulong)*(uint *)(puVar10 + 1);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      uVar2 = *(undefined8 *)((long)puVar10 + 0xc);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)((long)puVar10 + 0x14);
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      uVar2 = *(undefined8 *)((long)puVar10 + 0x1c);
      *(ulong *)(param_1 + 0x38) = (ulong)*(uint *)((long)puVar10 + 0x24);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x20);
    }
  }
  return;
}


