/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da2ca0; name: FUN_02da2ca0
 */


void FUN_02da2ca0(undefined1 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *param_2;
  plVar3 = (long *)param_2[3];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  puVar5 = &DAT_04299208;
  if ((((((((DAT_04299208 != lVar4) && (puVar5 = &DAT_04299228, DAT_04299228 != lVar4)) &&
          (puVar5 = &DAT_04299248, DAT_04299248 != lVar4)) &&
         (((puVar5 = &DAT_04299268, DAT_04299268 != lVar4 &&
           (puVar5 = &DAT_04299288, DAT_04299288 != lVar4)) &&
          ((puVar5 = &DAT_042992a8, DAT_042992a8 != lVar4 &&
           ((puVar5 = &DAT_042992c8, DAT_042992c8 != lVar4 &&
            (puVar5 = &DAT_042992e8, DAT_042992e8 != lVar4)))))))) &&
        (puVar5 = &DAT_04299308, DAT_04299308 != lVar4)) &&
       ((((((puVar5 = &DAT_04299328, DAT_04299328 != lVar4 &&
            (puVar5 = &DAT_04299348, DAT_04299348 != lVar4)) &&
           (puVar5 = &DAT_04299368, DAT_04299368 != lVar4)) &&
          ((puVar5 = &DAT_04299388, DAT_04299388 != lVar4 &&
           (puVar5 = &DAT_042993a8, DAT_042993a8 != lVar4)))) &&
         (puVar5 = &DAT_042993c8, DAT_042993c8 != lVar4)) &&
        (((puVar5 = &DAT_042993e8, DAT_042993e8 != lVar4 &&
          (puVar5 = &DAT_04299408, DAT_04299408 != lVar4)) &&
         (((puVar5 = &DAT_04299428, DAT_04299428 != lVar4 &&
           (((puVar5 = &DAT_04299448, DAT_04299448 != lVar4 &&
             (puVar5 = &DAT_04299468, DAT_04299468 != lVar4)) &&
            (puVar5 = &DAT_04299488, DAT_04299488 != lVar4)))) &&
          (((puVar5 = &DAT_042994a8, DAT_042994a8 != lVar4 &&
            (puVar5 = &DAT_042994c8, DAT_042994c8 != lVar4)) &&
           (puVar5 = &DAT_042994e8, DAT_042994e8 != lVar4)))))))))) &&
      (((puVar5 = &DAT_04299508, DAT_04299508 != lVar4 &&
        (puVar5 = &DAT_04299528, DAT_04299528 != lVar4)) &&
       ((puVar5 = &DAT_04299548, DAT_04299548 != lVar4 &&
        (((puVar5 = &DAT_04299568, DAT_04299568 != lVar4 &&
          (puVar5 = &DAT_04299588, DAT_04299588 != lVar4)) &&
         (puVar5 = &DAT_042995a8, DAT_042995a8 != lVar4)))))))) &&
     ((puVar5 = &DAT_042995c8, DAT_042995c8 != lVar4 &&
      (puVar5 = &DAT_042995e8, DAT_042995e8 != lVar4)))) {
    puVar5 = &DAT_04299608;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  *param_1 = 0;
  if (puVar5 != &DAT_04299608) {
    uVar1 = puVar5[1];
    uVar2 = *(undefined2 *)((long)puVar5 + 0x1c);
    *(undefined8 *)(param_1 + 8) = *puVar5;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = puVar5[2];
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar5 + 3);
    *(undefined2 *)(param_1 + 0x24) = uVar2;
    *param_1 = 1;
  }
  return;
}


