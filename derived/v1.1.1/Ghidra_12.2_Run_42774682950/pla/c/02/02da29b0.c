/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da29b0; name: FUN_02da29b0
 */


void FUN_02da29b0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = (ulong)DAT_04408df8;
  if (DAT_04408df8 < 0x20) {
    lVar2 = *param_1;
    plVar3 = &DAT_04299208;
    if ((((((((DAT_04299208 == lVar2) || (plVar3 = &DAT_04299228, DAT_04299228 == lVar2)) ||
            (plVar3 = &DAT_04299248, DAT_04299248 == lVar2)) ||
           (((plVar3 = &DAT_04299268, DAT_04299268 == lVar2 ||
             (plVar3 = &DAT_04299288, DAT_04299288 == lVar2)) ||
            ((plVar3 = &DAT_042992a8, DAT_042992a8 == lVar2 ||
             ((plVar3 = &DAT_042992c8, DAT_042992c8 == lVar2 ||
              (plVar3 = &DAT_042992e8, DAT_042992e8 == lVar2)))))))) ||
          (plVar3 = &DAT_04299308, DAT_04299308 == lVar2)) ||
         ((((((plVar3 = &DAT_04299328, DAT_04299328 == lVar2 ||
              (plVar3 = &DAT_04299348, DAT_04299348 == lVar2)) ||
             (plVar3 = &DAT_04299368, DAT_04299368 == lVar2)) ||
            ((plVar3 = &DAT_04299388, DAT_04299388 == lVar2 ||
             (plVar3 = &DAT_042993a8, DAT_042993a8 == lVar2)))) ||
           (plVar3 = &DAT_042993c8, DAT_042993c8 == lVar2)) ||
          (((plVar3 = &DAT_042993e8, DAT_042993e8 == lVar2 ||
            (plVar3 = &DAT_04299408, DAT_04299408 == lVar2)) ||
           (((plVar3 = &DAT_04299428, DAT_04299428 == lVar2 ||
             (((plVar3 = &DAT_04299448, DAT_04299448 == lVar2 ||
               (plVar3 = &DAT_04299468, DAT_04299468 == lVar2)) ||
              (plVar3 = &DAT_04299488, DAT_04299488 == lVar2)))) ||
            (((plVar3 = &DAT_042994a8, DAT_042994a8 == lVar2 ||
              (plVar3 = &DAT_042994c8, DAT_042994c8 == lVar2)) ||
             (plVar3 = &DAT_042994e8, DAT_042994e8 == lVar2)))))))))) ||
        (((plVar3 = &DAT_04299508, DAT_04299508 == lVar2 ||
          (plVar3 = &DAT_04299528, DAT_04299528 == lVar2)) ||
         ((plVar3 = &DAT_04299548, DAT_04299548 == lVar2 ||
          (((plVar3 = &DAT_04299568, DAT_04299568 == lVar2 ||
            (plVar3 = &DAT_04299588, DAT_04299588 == lVar2)) ||
           (plVar3 = &DAT_042995a8, DAT_042995a8 == lVar2)))))))) ||
       ((plVar3 = &DAT_042995c8, DAT_042995c8 == lVar2 ||
        (plVar3 = &DAT_042995e8, DAT_042995e8 == lVar2)))) {
      *plVar3 = lVar2;
      plVar3[1] = param_1[1];
      plVar3[2] = param_1[2];
      plVar3 = plVar3 + 3;
    }
    else {
      DAT_04408df8 = DAT_04408df8 + 1;
      (&DAT_04299208)[uVar1 * 4] = lVar2;
      (&PTR_DAT_04299210)[uVar1 * 4] = (undefined *)param_1[1];
      (&DAT_04299218)[uVar1 * 4] = param_1[2];
      plVar3 = (long *)(&DAT_04299220 + uVar1 * 8);
    }
    lVar2 = param_1[3];
    *(undefined2 *)((long)plVar3 + 4) = *(undefined2 *)((long)param_1 + 0x1c);
    *(int *)plVar3 = (int)lVar2;
  }
  return;
}


